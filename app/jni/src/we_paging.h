#if !defined(WE_PAGING_H)
#define WE_PAGING_H

#include <stddef.h>

struct WebsiteEntryPaging {
	size_t position; /* The current page number */
	size_t maximum; /* The maximum number of items */
};

typedef struct WebsiteEntryPaging we_paging_t;

#endif
