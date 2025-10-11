#if !defined(WEBSITE_ENTRY_H)
#define WEBSITE_ENTRY_H

struct WebsiteEntry {
	int id;
	const char* name;
	const char* query;
	const char* url;
	const char* email;
	int difficulty;
	const char* notes;
};

typedef struct WebsiteEntry we_t;

#endif
