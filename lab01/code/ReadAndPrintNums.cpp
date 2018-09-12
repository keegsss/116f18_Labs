#include <iostream>
#include <vector>

int main(){
	int i {};
	std::vector<int> V {};

	while (true) {
		// Read in next line
		std::cin >> i;
		if (std::cin.fail()) {
			// We're done reading numbers.. break out of loop!
			std::cout << "Input was invalid." << std::endl;
			break;

		} else {
			V.push_back(i);
		}
	}

	std::cout << "V contains " << V.size() << " elements" << std::endl;

	std::cout << "Contents (forwards): ";
	for (auto i : V) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "Contents (reverse): ";
	for (int i = V.size()-1; i >= 0; i--) {
		std::cout << V.at(i) << " ";
	}
	std::cout << std::endl;

	return 0;
}
