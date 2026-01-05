#pragma once
#include <iostream>
#include <limits>

namespace utils {

    template <typename T>
    void inputNatural(T& integer, T max = std::numeric_limits<T>::max()) {
        while (true) {
            if (std::cin >> integer) {
                if (integer > 0 && integer <= max) {
                    break;
                }
                std::cout << "Input out of range (1 - " << max << "). Retry: ";
            }
            else {
                std::cout << "Invalid input. Retry: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    template <typename T>
    void printContainer(const T& container) {
        for (const auto& elem : container) {
            std::cout << elem << "\t";
        }
        std::cout << "\n";
    }

}