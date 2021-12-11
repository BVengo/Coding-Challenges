#include <iostream>
#include <iomanip>

int main() {
	double C, sum;
	int L;

	std::cin >> C >> L;

	while(L--) {
		double x, y;
		std::cin >> x >> y;

		sum += x * y;
	}

	std::cout << std::fixed;
    std::cout << std::setprecision(7);
	std::cout << sum * C << std::endl;
}