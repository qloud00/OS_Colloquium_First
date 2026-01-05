#include <iostream>
#include <vector>
#include "factorial.h"
#include "utils.h"

int main() {
    int n;
    std::cout << "Enter n (1-" << MAX_FACTORIAL_ARG << "): ";
    utils::inputNatural(n, MAX_FACTORIAL_ARG);

    try {
        std::vector<uint64_t> result = getFactorialsSequence(n);

        std::cout << "First " << n << " factorials:\n";
        for (size_t i = 0; i < result.size(); ++i) {
            std::cout << (i + 1) << "! = " << result[i] << "\n";
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}