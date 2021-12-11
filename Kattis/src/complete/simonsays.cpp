#include <iostream>
#include <string>

int main() {
	int n;
	std::string line;

	std::cin >> n;
	std::getline(std::cin, line);

	while(n--) {
		std::getline(std::cin, line);

		if(line.find("Simon says") == 0) {
			std::cout << line.substr(11) << std::endl;
		}
	}
}