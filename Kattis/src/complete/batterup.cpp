#include <iostream>

int main() {
	int n;
	int bats = 0;
	double output = 0;

	std::cin >> n;

	while(n--) {
		int hit;
		std::cin >> hit;

		if(hit != -1) {
			bats++;
			output += hit;
		}
	}

	output /= bats;

	std::cout << output << std::endl;
}
