cmake_minimum_required(VERSION 3.19 FATAL_ERROR)

project(
	Kurt
	VERSION 0.1
	DESCRIPTION ""
	HOMEPAGE_URL "https://github.com/AmanoTeam"
	LANGUAGES C
)

set(CMAKE_POLICY_DEFAULT_CMP0048 NEW)
set(CMAKE_POLICY_DEFAULT_CMP0069 NEW)
set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)
set(CMAKE_PLATFORM_NO_VERSIONED_SONAME ON)

set(
	KURT_SOURCE_FILES
	"${CMAKE_SOURCE_DIR}/src/lowerize.c"
	"${CMAKE_SOURCE_DIR}/src/unaccent.c"
	"${CMAKE_SOURCE_DIR}/src/unwhitespace.c"
	"${CMAKE_SOURCE_DIR}/src/we_search.c"
	"${CMAKE_SOURCE_DIR}/src/we_results.c"
	"${CMAKE_SOURCE_DIR}/src/kurt_jni.c"
)

add_library(
	kurt
	SHARED
	${KURT_SOURCE_FILES}
)
