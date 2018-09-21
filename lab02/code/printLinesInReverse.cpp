#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> lines {};
    std::string line {};
    while (std::getline(std::cin, line)) {
        lines.push_back(line);
    }

    for (int i = lines.size() - 1; i >= 0; i--) {
        std::cout << lines.at(i) << std::endl;
    }
    return 0;
}
