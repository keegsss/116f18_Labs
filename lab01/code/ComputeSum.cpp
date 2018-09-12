#include <iostream>

int main(){
	// all int vars have default initial value of zero
	int i {};
	int count {};
	int sum {};

    std::cout << "Enter a number:" << std::endl;
    while (std::cin >> i) {
        sum += i;	// equivalent to sum = sum + i
        count += 1; // equivalent both to count++ and count += 1
        std::cout << "Enter a number:" << std::endl;
    }

    std::cout << "Input was invalid." << std::endl;
	std::cout << "Number of Values Entered: " << count << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
