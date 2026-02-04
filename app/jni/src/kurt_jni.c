#include <string.h>

#include <jni.h>

#include "kurt_jni.h"
#include "we_paging.h"
#include "we_search.h"

struct KurtJNIMethods {
	/* WebsiteEntryPaging */
	jmethodID paging_get_maximum;
	jmethodID paging_get_position;
	
	/* WebsiteEntry */
	jmethodID we_set_id;
	jmethodID we_set_name;
	jmethodID we_set_url;
	jmethodID we_set_email;
	jmethodID we_set_difficulty;
	
	/* WebsiteEntryResults */
	jmethodID results_append;
};

struct KurtJNIClasses {
	jclass out_of_memory_error;
	jclass class_cast_error;
	jclass website_entry;
	jclass website_entry_paging;
	jclass website_entry_results;
};

static struct KurtJNIMethods methods = {0};
static struct KurtJNIClasses classes = {0};

jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	
	JNIEnv* env = NULL;
	jclass class = NULL;
	
	if ((*vm)->GetEnv(vm, (void**) &env, JNI_VERSION_1_6) != JNI_OK) {
		return JNI_ERR;
	}
	
	/* Exceptions */
	class = (*env)->FindClass(env, "java/lang/OutOfMemoryError");
	classes.out_of_memory_error = (*env)->NewGlobalRef(env, class);
	(*env)->DeleteLocalRef(env, class);
	
	class = (*env)->FindClass(env, "java/lang/ClassCastException");
	classes.class_cast_error = (*env)->NewGlobalRef(env, class);
	(*env)->DeleteLocalRef(env, class);
	
	/* WebsiteEntry */
	class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntry");
	
	classes.website_entry = (*env)->NewGlobalRef(env, class);
	
	methods.we_set_id = (*env)->GetMethodID(env, class, "setId", "(I)V");
	methods.we_set_name = (*env)->GetMethodID(env, class, "setName", "(Ljava/lang/String;)V");
	methods.we_set_url = (*env)->GetMethodID(env, class, "setUrl", "(Ljava/lang/String;)V");
	methods.we_set_email = (*env)->GetMethodID(env, class, "setEmail", "(Ljava/lang/String;)V");
	methods.we_set_difficulty = (*env)->GetMethodID(env, class, "setDifficulty", "(I)V");
	
	(*env)->DeleteLocalRef(env, class);
	
	/* WebsiteEntryPaging */
	class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntryPaging");
	
	classes.website_entry_paging = (*env)->NewGlobalRef(env, class);
	
	methods.paging_get_maximum = (*env)->GetMethodID(env, class, "getMaximum", "()I");
	methods.paging_get_position = (*env)->GetMethodID(env, class, "getPosition", "()I");
	
	(*env)->DeleteLocalRef(env, class);
	
	/* WebsiteEntryResults */
	class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntryResults");
	
	classes.website_entry_results = (*env)->NewGlobalRef(env, class);
	
	methods.results_append = (*env)->GetMethodID(
		env,
		class,
		"append",
		"(Lcom/amanoteam/kurt/libkurt/WebsiteEntry;)V"
	);
	
	(*env)->DeleteLocalRef(env, class);
	
	return JNI_VERSION_1_6;
	
}

void JNI_OnUnload(JavaVM* vm, void* reserved) {
	
	JNIEnv* env = NULL;
	
	if ((*vm)->GetEnv(vm, (void**) &env, JNI_VERSION_1_6) != JNI_OK) {
		return;
	}
	
	(*env)->DeleteGlobalRef(env, classes.out_of_memory_error);
	(*env)->DeleteGlobalRef(env, classes.class_cast_error);
	
	(*env)->DeleteGlobalRef(env, classes.website_entry);
	(*env)->DeleteGlobalRef(env, classes.website_entry_paging);
	(*env)->DeleteGlobalRef(env, classes.website_entry_results);
	
	memset(&classes, 0, sizeof(classes));
	memset(&methods, 0, sizeof(methods));
	
}

jobject Java_com_amanoteam_kurt_libkurt_LibKurt_we_1search(
	JNIEnv* env,
	jobject obj,
	jstring kquery,
	jobject kpaging
) {
	
	size_t index = 0;
	ssize_t offset = 0;
	
	jobject kobject = NULL;
	jobject kresults = NULL;
	jstring kvalue = NULL;
	
	jint kmaximum = 0;
	jint kposition = 0;
	
	const we_t* entry = NULL;
	
	we_paging_t paging = {0};
	we_results_t results = {0};
	
	const char* query = NULL;
	
	/* Query */
	if (kquery != NULL) {
		query = (*env)->GetStringUTFChars(env, kquery, NULL);
		
		if (query == NULL) {
			goto end;
		}
	}
	
	/* Paging */
	kmaximum = (*env)->CallIntMethod(
		env,
		kpaging,
		methods.paging_get_maximum
	);

	kposition = (*env)->CallIntMethod(
		env,
		kpaging,
		methods.paging_get_position
	);
	
	if (kmaximum < 0 || kposition < 0) {
		(*env)->ThrowNew(
			env,
			classes.class_cast_error,
			NULL
		);
		
		goto end;
	}
	
	paging.maximum = (size_t) kmaximum;
	paging.position = (size_t) kposition;
	
	/* Search */
	offset = we_search(query, paging, NULL);
	
	if (offset == -1) {
		(*env)->ThrowNew(
			env,
			classes.out_of_memory_error,
			NULL
		);
		
		goto end;
	}
	
	if (offset == 0) {
		goto end;
	}
	
	if (we_results_init(&results, (size_t) offset) == -1) {
		(*env)->ThrowNew(
			env,
			classes.out_of_memory_error,
			NULL
		);
		
		goto end;
	}
	
	offset = we_search(query, paging, &results);
	
	/* Create results object */
	kresults = (*env)->AllocObject(
		env,
		classes.website_entry_results
	);
	
	if (kresults == NULL) {
		goto end;
	}
	
	/* Fill results */
	for (index = 0; index < results.offset; index++) {
		entry = results.items[index];
		
		kobject = (*env)->AllocObject(
			env,
			classes.website_entry
		);
		
		if (kobject == NULL) {
			goto end;
		}
		
		/* id */
		(*env)->CallVoidMethod(
			env,
			kobject,
			methods.we_set_id,
			entry->id
		);
		
		/* name */
		kvalue = (*env)->NewStringUTF(env, entry->name);
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			methods.we_set_name,
			kvalue
		);
		
		/* url */
		kvalue = (*env)->NewStringUTF(env, entry->url);
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			methods.we_set_url,
			kvalue
		);
		
		/* email */
		kvalue = NULL;
		
		if (entry->email != NULL) {
			kvalue = (*env)->NewStringUTF(
				env,
				entry->email
			);
		}
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			methods.we_set_email,
			kvalue
		);
		
		/* difficulty */
		(*env)->CallVoidMethod(
			env,
			kobject,
			methods.we_set_difficulty,
			entry->difficulty
		);
		
		/* append */
		(*env)->CallVoidMethod(
			env,
			kresults,
			methods.results_append,
			kobject
		);
	}
	
	end:;
	
	if (query != NULL) {
		(*env)->ReleaseStringUTFChars(
			env,
			kquery,
			query
		);
	}
	
	we_results_free(&results);
	
	return kresults;
	
}
