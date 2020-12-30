#include <iostream>

int main() {
	long n;
	std::cin >> n;
	
	while(true) {
		long num = n;
		int sum = 0;
		while(num > 0) {
			sum += num%10;
			num /= 10;
		}

		if(n % sum == 0) {
			std::cout << n << std::endl;
			break;
		}
		n++;
	}
}