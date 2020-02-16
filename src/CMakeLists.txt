project(src)

set(HEADER_FILES Echo.h)
set(SOURCE_FILES Echo.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})