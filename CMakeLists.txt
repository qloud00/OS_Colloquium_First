cmake_minimum_required (VERSION 3.14)

project ("OS_Colloquium_1" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_subdirectory("utils") 
add_subdirectory ("factorial")
add_subdirectory ("dupl_erase")
add_subdirectory ("list_reverse")