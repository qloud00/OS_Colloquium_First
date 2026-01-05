#pragma once

#include <vector>
#include <cstdint>

constexpr int MAX_FACTORIAL_ARG = 20;

uint64_t factorial(int n);
std::vector<uint64_t> getFactorialsSequence(int n);