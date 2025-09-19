#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* unwhitespace(char* const s) {
	
	size_t size = 0;
	
	char* pos = NULL;
	
	char* start = s;
	char* end = strchr(start, '\0');
	
	while (start != end) {
		const char ch = *start;
		
		if (!isspace(ch)) {
			break;
		}
		
		start++;
	}
	
	if (start != end) {
		end--;
	}
	
	while (end != start) {
		const unsigned char ch = *end;
		
		if (!isspace(ch)) {
			break;
		}
		
		end--;
	}
	
	if (*end != '\0') {
		end++;
	}
	
	size = (size_t) (start - s);
	
	if (size != 0) {
		size = (size_t) (end - start);
		memmove(s, start, size);
		s[size] = '\0';
	}
	
	start = s;
	end = strchr(start, '\0');
	
	size = 0;
	
	while (start != end) {
		const char ch = *start;
		
		if (isspace(ch)) {
			size++;
		} else {
			if (size > 1) {
				pos += 2;
				
				size = strlen(start) + 1;
				memmove(pos, start, size);
				
				end = (pos + size);
				*end = '\0';
				
				if (start > end) {
					break;
				}
			}
			
			size = 0;
			pos = start;
		}
		
		start++;
	}
	
	return s;
	
}
