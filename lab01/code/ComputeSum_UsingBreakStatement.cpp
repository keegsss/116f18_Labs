#include <iostream>

int main(){
	// all int vars have default initial value of zero
	int i {};
	int count {};
	int sum {};

	while (true) {
		std::cout << "Enter a number:" << std::endl;
		std::cin >> i;
		if (std::cin.fail()) {
			// We're done reading numbers.. break out of loop!
			std::cout << "Input was invalid." << std::endl;
			break;

		} else {
			sum += i;	// equivalent to sum = sum + i
			count += 1; // equivalent both to count++ and count += 1
		}
	}

	std::cout << "Number of Values Entered: " << count << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
