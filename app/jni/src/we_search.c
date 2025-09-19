#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include "lowerize.h"
#include "unaccent.h"
#include "unwhitespace.h"

#include "we.h"
#include "we_entries.h"
#include "we_results.h"
#include "we_paging.h"

ssize_t we_search(
	const char* const query,
	we_paging_t paging,
	we_results_t* results
) {
	
	int matches = 0;
	char* search_query = NULL;
	
	size_t index = 0;
	ssize_t offset = 0;
	
	/* The number of entries we should skip */
	const size_t skip = (paging.maximum * paging.position);
	
	/* The number of matched search results so far */
	size_t current = 0;
	
	const we_t* entry = NULL;
	
	if (!(query == NULL || *query == '\0')) {
		search_query = malloc(strlen(query) + 1);
		
		if (search_query == NULL) {
			offset = -1;
			goto end;
		}
		
		strcpy(search_query, query);
		
		unaccent(search_query);
		lowerize(search_query);
		unwhitespace(search_query);
	}
	
	for (index = 0; index < sizeof(WEBSITE_ENTRIES) / sizeof(*WEBSITE_ENTRIES); index++) {
		entry = &WEBSITE_ENTRIES[index];
		
		matches = (search_query == NULL);
		
		if (!matches) {
			matches = strstr(entry->query, search_query) != NULL;
		}
		
		if (!matches) {
			matches = strstr(entry->url, search_query) != NULL;
		}
		
		if (!matches) {
			continue;
		}
		
		current++;
		
		if (skip != 0 && current <= skip) {
			continue;
		}
		
		if (results != NULL) {
			results->items[results->offset++] = entry;
		}
		
		offset++;
		printf("%s\n", entry->name);
		printf("%s\n", entry->url);
		if (offset >= paging.maximum) {
			break;
		}
	}
	
	end:;
	
	free(search_query);
	
	return offset;
	
}
