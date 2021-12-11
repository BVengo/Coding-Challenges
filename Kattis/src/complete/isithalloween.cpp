#include <iostream>
#include <string>

int main() {
	std::string input;
	std::getline(std::cin, input);

	std::cout << (!input.compare("OCT 31") || !input.compare("DEC 25") ? "yup" : "nope") << std::endl;
}