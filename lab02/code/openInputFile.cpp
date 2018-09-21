#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv ) {
    std::string filename{argv[1]};
    std::ifstream myfile;
    myfile.open(filename);

    if(myfile.is_open()) {
        std::string line{};
        while( std::getline(myfile,line) ) {
            std::cout << line << std::endl;
        }
        myfile.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
    return 0;
}
