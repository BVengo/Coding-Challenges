#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		int n;
		std::cin >> n;

		int max = -1;
		int min = -1;

		while(n--) {
			int x;
			std::cin >> x;

			if(min == -1 || x < min) {
				min = x;
			}

			if(max == -1 || x > max) {
				max = x;
			}
		}

		std::cout << (max-min)*2 << std::endl;
	}
}