add_executable(dupl_erase dupl_erase.cpp dupl_erase.h dupl_erase_main.cpp)
target_link_libraries(dupl_erase PRIVATE utils_lib)

add_executable(dupl_erase_tests dupl_erase.cpp dupl_erase.h dupl_erase_tests.cpp)
target_link_libraries(dupl_erase_tests PRIVATE GTest::gtest_main)

gtest_discover_tests(dupl_erase_tests)