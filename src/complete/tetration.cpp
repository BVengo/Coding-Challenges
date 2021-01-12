#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	double n;
	std::cin >> n;

	std::cout << pow(n, 1.0/n) << std::endl;
}