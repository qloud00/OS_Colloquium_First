#include "factorial.h"
#include <stdexcept>

uint64_t factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Argument cannot be negative.");
    }
    if (n > MAX_FACTORIAL_ARG) {
        throw std::overflow_error("Result exceeds uint64_t capacity.");
    }

    uint64_t result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

std::vector<uint64_t> getFactorialsSequence(int n) {
    if (n < 0) {
        throw std::invalid_argument("Sequence length cannot be negative.");
    }
    if (n > MAX_FACTORIAL_ARG) {
        throw std::overflow_error("Sequence calculation exceeds uint64_t capacity.");
    }
    if (n == 0) {
        return {};
    }

    std::vector<uint64_t> results(n, 1);

    for (int i = 1; i < n; ++i) {
        results[i] = results[i - 1] * (i + 1);
    }

    return results;
}