#include <iostream>
#include <regex>

int main() {
	int n, count = 0;
	std::cin >> n;
	while(n--) {
		std::string colour;
		std::cin >> colour;

		for (int i=0; i < colour.size(); i++) {
			colour[i] = tolower(colour[i]);
		}
		
		count += std::regex_search(colour, std::regex("pink|rose"));
	}

	if(count) {
		std::cout << count << std::endl;
	}
	else {
		std::cout << "I must watch Star Wars with my daughter" << std::endl;
	}
}