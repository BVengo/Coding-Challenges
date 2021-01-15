#include <iostream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input);
    
    int R = std::stoi(input.substr(0, input.find(' ')));
    int S = std::stoi(input.substr(input.find(' ') + 1));

    std::cout << S+S-R << std::endl;
}
