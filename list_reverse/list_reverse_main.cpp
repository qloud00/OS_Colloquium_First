#include "list_reverse.h"
#include "utils.h"
#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    utils::inputNatural(n);

    list_reverse::LinkedList<int> list;

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        while (!(std::cin >> value)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number, try again: ";
        }
        list.pushBack(value);
    }

    std::cout << "List before reverse:\n" << list;

    list.reverseRecursive();

    std::cout << "List after reverse:\n" << list;

    return 0;
}