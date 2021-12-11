#include <iostream>
#include <regex>

int main() {
	bool escaped = true;
	for(int i = 1; i <= 5; i++) {
		std::string blimp;
		std::cin >> blimp;

		if(std::regex_search(blimp, std::regex("FBI"))) {
			escaped = false;
			std::cout << i << std::endl;
		}
	}

	if(escaped) {
		std::cout << "HE GOT AWAY!" << std::endl;
	}
}