add_library(factorial_lib factorial.cpp factorial.h)
target_include_directories(factorial_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(factorial_run factorial_main.cpp)
target_link_libraries(factorial_run PRIVATE factorial_lib utils_lib)

add_executable(factorial_tests factorial_tests.cpp)
target_link_libraries(factorial_tests PRIVATE factorial_lib GTest::gtest_main)

gtest_discover_tests(factorial_tests)