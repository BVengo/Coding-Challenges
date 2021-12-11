#include <iostream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input);
    
    int numPeople = std::stoi(input.substr(0, input.find(' ')));
    int numQuestions = std::stoi(input.substr(input.find(' ') + 1));

    for(int i = 0; i < numPeople; i++) {
      std::string temp;
		  std::cin >> temp;
    }

    std::cout << numQuestions << std::endl;
}