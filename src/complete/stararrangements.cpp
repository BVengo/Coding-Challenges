#include <iostream>

int main() {
	int n;
	std::cin >> n;

	std::cout << n << ":" << std::endl;

	for(int i = 2; i <= (n/2 + 1); i++) {
		for(int j = i-1; j <= i; j++) {
			int sum = 0;
			while(sum < n) {
				sum += i;

				if(sum < n) {
					sum += j;
				}

				if(sum == n) {
					std::cout << i << "," << j << std::endl;
				}
			}
		}
	}
}