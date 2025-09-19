#include <jni.h>
#include <android/log.h>

#include "kurt_jni.h"
#include "we_paging.h"
#include "we_search.h"

jobject Java_com_amanoteam_kurt_libkurt_LibKurt_we_1search(
	JNIEnv* env,
	jobject obj,
	jstring kquery,
	jobject kpaging
) {
	
	size_t index = 0;
	ssize_t offset = 0;
	
	jclass class = NULL;
	
	jclass cast_error = NULL;
	jclass oom_error = NULL;
	
	jclass we_class = NULL;
	jclass we_results_class = NULL;
	
	jobject kobject = NULL;
	
	jint kmaximum = 0;
	jint kposition = 0;
	jobject kresults = NULL;
	jstring kvalue = NULL;
	
	const we_t* entry = NULL;
	
	we_paging_t paging = {0};
	we_results_t results = {0};
	
	const char* query = NULL;
	
	if (kquery != NULL) {
		query = (*env)->GetStringUTFChars(env, kquery, NULL);
		
		if (query == NULL) {
			goto end;
		}
	}
	
	oom_error = (*env)->FindClass(env, "java/lang/OutOfMemoryError");
	
	if (oom_error == NULL) {
		goto end;
	}
	
	we_results_class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntryResults");
	
	if (we_results_class == NULL) {
		goto end;
	}
	
	we_class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntry");
	
	if (we_class == NULL) {
		goto end;
	}
	
	cast_error = (*env)->FindClass(env, "java/lang/ClassCastException");
	
	if (cast_error == NULL) {
		goto end;
	}
	
	class = (*env)->FindClass(env, "com/amanoteam/kurt/libkurt/WebsiteEntryPaging");
	
	if (class == NULL) {
		goto end;
	}
	
	kmaximum = (*env)->CallIntMethod(
		env,
		kpaging,
		(*env)->GetMethodID(env, class, "getMaximum", "()I")
	);
	
	kposition = (*env)->CallIntMethod(
		env,
		kpaging,
		(*env)->GetMethodID(env, class, "getPosition", "()I")
	);
	
	if (!(kmaximum >= 0 && kposition >= 0)) {
		(*env)->ThrowNew(env, cast_error, NULL);
		goto end;
	}
	
	paging.maximum = (size_t) kmaximum;
	paging.position = (size_t) kposition;
	
	__android_log_print(
		ANDROID_LOG_DEBUG,
		"kurt_jni",
		"websiteEntrySearch(query = '%s', paging = WebsiteEntryPaging(maximum = %zu, position = %zu))",
		query,
		paging.maximum,
		paging.position
	);
	
	offset = we_search(query, paging, NULL);
	
	__android_log_print(
		ANDROID_LOG_DEBUG,
		"kurt_jni",
		"websiteEntrySearch: %zd",
		offset
	);
	
	if (offset == -1) {
		(*env)->ThrowNew(env, oom_error, NULL);
		goto end;
	}
	
	if (offset == 0) {
		goto end;
	}
	
	if (we_results_init(&results, (size_t) offset) == -1) {
		(*env)->ThrowNew(env, oom_error, NULL);
		goto end;
	}
	
	offset = we_search(query, paging, &results);
	
	__android_log_print(
		ANDROID_LOG_DEBUG,
		"kurt_jni",
		"websiteEntrySearch: %zd",
		offset
	);
	
	kresults = (*env)->AllocObject(env, we_results_class);
	
	if (kresults == NULL) {
		goto end;
	}
	
	for (index = 0; index < results.offset; index++) {
		entry = results.items[index];
		
		kobject = (*env)->AllocObject(env, we_class);
		
		if (kobject == NULL) {
			goto end;
		}
		
		/* name */
		kvalue = (*env)->NewStringUTF(env, entry->name);
		
		if (kvalue == NULL) {
			goto end;
		}
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			(*env)->GetMethodID(env, we_class, "setName", "(Ljava/lang/String;)V"),
			kvalue
		);
		
		/* url */
		kvalue = (*env)->NewStringUTF(env, entry->url);
		
		if (kvalue == NULL) {
			goto end;
		}
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			(*env)->GetMethodID(env, we_class, "setUrl", "(Ljava/lang/String;)V"),
			kvalue
		);
		
		kvalue = NULL;
		
		/* email */
		if (entry->email != NULL) {
			kvalue = (*env)->NewStringUTF(env, entry->email);
			
			if (kvalue == NULL) {
				goto end;
			}
		}
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			(*env)->GetMethodID(env, we_class, "setEmail", "(Ljava/lang/String;)V"),
			kvalue
		);
		
		/* difficulty */
		(*env)->CallVoidMethod(
			env,
			kobject,
			(*env)->GetMethodID(env, we_class, "setDifficulty", "(I)V"),
			entry->difficulty
		);
		
		kvalue = NULL;
		
		/* notes */
		if (entry->notes != NULL) {
			kvalue = (*env)->NewStringUTF(env, entry->notes);
			
			if (kvalue == NULL) {
				goto end;
			}
		}
		
		(*env)->CallVoidMethod(
			env,
			kobject,
			(*env)->GetMethodID(env, we_class, "setNotes", "(Ljava/lang/String;)V"),
			kvalue
		);
		
		(*env)->CallVoidMethod(
			env,
			kresults,
			(*env)->GetMethodID(env, we_results_class, "append", "(Lcom/amanoteam/kurt/libkurt/WebsiteEntry;)V"),
			kobject
		);
		
	}
	
	end:;
	
	we_results_free(&results);
	
	return kresults;
	
}