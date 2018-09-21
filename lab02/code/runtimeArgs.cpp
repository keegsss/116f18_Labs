#include <iostream>
#include <vector>
#include <string>

int main(int argc, char** argv) {

    std::vector< std::string > arguments;
    for (int i = 1; i < argc; i++){
        arguments.push_back(argv[i]);
    }

    int sum{0};
    for (auto arg: arguments){
        sum += std::stoi(arg);
    }
    std::cout << sum << std::endl;
    return 0;
}
