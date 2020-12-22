#include <iostream>

int main() {
	long A = 0, W, N;
	std::cin >> W >> N;

	while(N--) {
		int w, l;
		std::cin >> w >> l;

		A += w * l;
	}

	std::cout << A/W << std::endl;
}