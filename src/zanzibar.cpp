#include <iostream>

int main() {
	int n;
	std::cin >> n;

	while(n--) {
		long num, prevNum, imported = 0;
		std::cin >> num;

		while(num != 0) {
			if(num != 1 && num > 2*prevNum) {
				imported += num-2*prevNum;
			}
			prevNum = num;		
			std::cin >> num;
		}

		std::cout << imported << std::endl;
	}
}