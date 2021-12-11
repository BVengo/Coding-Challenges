#include <iostream>
#include <math.h>

int main() {
	int N, W, H;
	float D;

	std::cin >> N >> W >> H;
	D = std::sqrt(W*W + H*H);

	while(N--) {
		int num;
		std::cin >> num;
		std::cout << (num <= D ? "DA" : "NE") << std::endl;
	}
}