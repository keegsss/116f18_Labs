#include <iostream>

int main() {
    int count {0};
    bool inAlliteration {false};
    char seqStartChar {' '};
    std::string word {};
    while (std::cin >> word) {
        if (inAlliteration) {
            if (seqStartChar != word.at(0)) {
                seqStartChar = word.at(0);
                inAlliteration = false;
            }
        } else {
            if (seqStartChar == word.at(0)) {
                count++;
                inAlliteration = true;
            } else {
                seqStartChar = word.at(0);
            }
        }
    }
    std::cout << "Found " << count << " alliterations." << std::endl;
}
