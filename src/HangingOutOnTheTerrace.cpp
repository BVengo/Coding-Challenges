#include <iostream>

int main() {
	std::string input, output;	
	std::cin >> input;

	output = "h";

	for(int i = 0; i < input.size() - 2; i++) {
		output.append("ee");
	}

	output.append("y");

	std::cout << output << std::endl;
}