#include <iostream>

int main() {
	int n, sum = 0;
	std::cin >> n;
	while(n--) {
		int k;
		std::cin >> k;
		sum += (k < 0 ? k : 0);
	}

	std::cout << -sum << std::endl;
}