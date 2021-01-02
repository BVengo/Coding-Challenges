#include <iostream>

int main() {
	int l, r;
	std::cin >> l >> r;

	if(!(l+r)) {
		std::cout << "Not a moose" << std::endl;
	}
	else {
		std::cout << (l == r ? "Even " : "Odd ") << 2 * (l > r ? l : r) << std::endl;
	}
}