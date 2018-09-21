#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> lines {};
    std::string currentLine {};
    while (std::getline(std::cin, currentLine)) {
        lines.push_back(currentLine);
    }

    for (int i = lines.size() - 1; i >= 0; i--) {
        currentLine = lines.at(i);
        for (int j = currentLine.size()-1; j >= 0; j--) {
            std::cout << currentLine.at(j);
        }
        std::cout << std::endl;
    }
    return 0;
}
