#include <iostream>

int getUnique(int a, int b, int c) {
	if (a == b) {
		return c;
	}
	if(a == c) {
		return b;
	}
	return a;
}

int main() {
	int x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	std::cout << getUnique(x1, x2, x3) << " " << getUnique(y1, y2, y3) << std::endl;
}