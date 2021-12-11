#include <iostream>

int main() {
	int n;
	std::cin >> n;

	while(n--) {
		int a, b, c;
		std::cin >> a >> b >> c;

		if(a+b == c || a*b == c || a-b == c || b-a == c || (b!=0 && 1.0*a/b == c) || (a!=0 && 1.0*b/a == c)) {
			std::cout << "Possible" << std::endl;
		}
		else {
			std::cout << "Impossible" << std::endl;
		}
	}
}