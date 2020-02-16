## Stack

Empty cpp stack to learn things in cpp during coding dojos.

## Build steps

#### Create new C++17 library project

#### Install googletest 
`mkdir lib && git clone https://github.com/google/googletest`

#### Add lib to project
Copy in lib/CMakeLists.txt
```
project(lib)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
``` 

#### Create src and test dirs
`mkdir src test`

#### Add lib, src, test to make
Add in CMakeLists.txt
```
add_subdirectory(lib)

add_subdirectory(src)
include_directories(src)

add_subdirectory(test)
```

#### Setup test
Copy in test/CMakeLists.txt
```
project(test)

add_executable(Google_Tests_run
        TODO.cpp
        )

target_link_libraries(Google_Tests_run src)
target_link_libraries(Google_Tests_run gtest gtest_main)
```

#### Setup src
Copy in src/CMakeLists.txt
```
project(src)

set(HEADER_FILES TODO.h)
set(SOURCE_FILES TODO.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})
```
