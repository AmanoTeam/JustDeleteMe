#include <stddef.h>
#include <stdlib.h>

#include "we_results.h"

int we_results_init(we_results_t* const results, const size_t size) {
	
	results->items = malloc(sizeof(*results->items) * size);
	
	if (results->items == NULL) {
		return -1;
	}
	
	return 0;
	
}

void we_results_free(we_results_t* const results) {
	
	free(results->items);
	results->items = NULL;
	
}