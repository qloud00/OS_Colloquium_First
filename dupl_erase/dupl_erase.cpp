#include "dupl_erase.h"
#include <unordered_set>

namespace dupl_erase {

	std::vector<int> removeDuplicates(const std::vector<int>& input) {
		if (input.empty()) {
			return {};
		}

		std::vector<int> result;
		result.reserve(input.size());

		std::unordered_set<int> seen;
		seen.reserve(input.size());

		for (int num : input) {
			if (seen.insert(num).second) {
				result.push_back(num);
			}
		}

		return result;
	}

}