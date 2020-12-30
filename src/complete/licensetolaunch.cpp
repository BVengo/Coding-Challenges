#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int minIdx = 0, min = -1;
	for(int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		if(min == -1 || num < min) {
			min = num;
			minIdx = i;
		}
	}

	std::cout << minIdx << std::endl;
}