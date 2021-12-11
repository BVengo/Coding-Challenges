#include <iostream>

int main() {
	int T;
	std::cin >> T;

	while(T--) {
		int n, f=1;
		std::cin >> n;

		for(int i = 2; i <= n; i++) {
			f *= i;
		}
		std::cout << f%10 << std::endl;
	}
}