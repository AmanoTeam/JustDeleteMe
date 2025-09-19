#if !defined(WE_RESULTS_H)
#define WE_RESULTS_H

#include <stddef.h>

#include "we.h"

struct WebsiteEntryResults {
	size_t offset;
	const we_t** items;
};

typedef struct WebsiteEntryResults we_results_t;

int we_results_init(we_results_t* const results, const size_t size);
void we_results_free(we_results_t* const results);

#endif
