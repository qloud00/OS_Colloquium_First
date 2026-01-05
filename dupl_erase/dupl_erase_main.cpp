#include "dupl_erase.h"
#include "utils.h"
#include <iostream>
#include <vector>
#include <limits>

int main() {
	int n;
	std::cout << "Enter the size of array: ";
	utils::inputNatural(n);

	std::vector<int> array(n);
	std::cout << "Enter " << n << " integers:\n";
	for (int i = 0; i < n; i++) {
		while (!(std::cin >> array[i])) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid number, try again: ";
		}
	}

	std::vector<int> result = dupl_erase::removeDuplicates(array);

	std::cout << "Array without duplicates:\n";
	utils::printContainer(result);

	return 0;
}