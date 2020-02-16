project(test)

add_executable(Google_Tests_run
        EchoTest.cpp
        )

target_link_libraries(Google_Tests_run src)
target_link_libraries(Google_Tests_run gtest gtest_main)