#include <stdlib.h>
#include <string.h>

#include "unaccent.h"

char* unaccent(char* s) {
	/*
	Replace accented characters in a string with their
	non-accented counterparts.
	*/
	
	size_t index = 0;
	size_t size = 0;
	
	size_t pattern_size = 0;
	size_t replacement_size = 0;
	
	char* end = NULL;
	
	const struct Accent* item = NULL;
	
	const char* pattern = NULL;
	const char* replacement = NULL;
	
	char* source = NULL;
	char* destination = NULL;
	
	for (index = 0; index < sizeof(ACCENTS) / sizeof(*ACCENTS); index++) {
		item = &ACCENTS[index];
		
		pattern = item->pattern;
		
		while ((destination = strstr(s, pattern)) != NULL) {
			replacement = item->replacement;
			
			pattern_size = strlen(pattern);
			replacement_size = strlen(replacement);
			
			if (replacement_size > 0) {
				memcpy(destination, replacement, replacement_size);
			}
			
			size = (pattern_size - replacement_size);
			
			if (size < 1) {
				continue;
			}
			
			source = destination + (((replacement_size > 0) ? replacement_size : pattern_size) + 1);
			destination += (replacement_size > 0) ? size : 0;
			
			end = strchr(destination, '\0');
			size = (size_t) (end - destination);
			
			memmove(destination, source, size);
		}
	}
	
	return s;
	
}
