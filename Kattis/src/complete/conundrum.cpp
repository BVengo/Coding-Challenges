#include <iostream>

int main() {
	std::string text;
	std::string name = "PER";
	int days = 0;

	std::cin >> text;

	for(int i = 0; i < text.size(); i++) {
		days += text[i] != name[i%3];
	}

	std::cout << days << std::endl;
}