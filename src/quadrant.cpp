#include <iostream>

int main() {
	int x, y, q;
	std::cin >> x >> y; 
	if(x > 0) {
		q = (y > 0 ? 1 : 4);
	}
	else {
		q= (y > 0 ? 2 : 3);
	}
	std::cout << q << std::endl;
}