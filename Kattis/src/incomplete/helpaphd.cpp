#include <iostream>
#include <regex>
#include <string>

int main() {
    int N;
    std::cin >> N;

    while(N--) {
        std::string input;
        std::cin >> input;

        if(input == "P=NP") {
            std::cout << "skipped" << std::endl;
            return(0);
        }

        std::regex r1("+.*$");
        std::regex r2("^.*+");  

        int first = std::stoi(std::regex_replace(input, r1, ""));
        int second = std::stoi(std::regex_replace(input, r2, ""));

        std::cout << (first + second) << std::endl;
    }
}