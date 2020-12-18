#include <iostream>

int main() {
	int L, x;
	std::cin >> L >> x;

	int count = 0;

	while(x--) {
		std::string direction;
		int num;

		std::cin >> direction >> num;
		if(direction.compare("leave")) {
			if(L - num >= 0) {
				L -= num;
			} 
			else {
				count++;
			}
		}
		else {
			L += num;
		}
	}

	std::cout << count << std::endl;
}