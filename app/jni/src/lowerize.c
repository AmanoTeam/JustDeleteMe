#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "lowerize.h"

char* lowerize(char* s) {
	/*
	Replace all uppercase characters in a string with their
	lowercase counterparts.
	*/
	
	size_t index = 0;
	
	for (index = 0; index < strlen(s); index++) {
		const char ch = s[index];
		s[index] = tolower(ch);
	}
	
	return s;
	
}