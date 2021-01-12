#include <iostream>
#include <iomanip>

int main() {
	double white = 0, lower = 0, upper = 0, symbol = 0;
	
	std::string input;
	std::cin >> input;

	for(char c : input) {
		if(islower(c)) {
			lower++;
		}
		else if(isupper(c)) {
			upper++;
		}
		else if(c == '_') {
			white++;
		}
		else {
			symbol++;
		}
	}

	std::cout << std::setprecision(7)
		<< white/input.size() << std::endl
		<< lower/input.size() << std::endl
		<< upper/input.size() << std::endl
		<< symbol/input.size() << std::endl;
}