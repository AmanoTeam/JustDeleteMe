#if !defined(WE_SEARCH_H)
#define WE_SEARCH_H

#include <stddef.h>
#include <sys/types.h>

#include "we_results.h"
#include "we_paging.h"

ssize_t we_search(
	const char* const query,
	we_paging_t paging,
	we_results_t* results
);

#endif
