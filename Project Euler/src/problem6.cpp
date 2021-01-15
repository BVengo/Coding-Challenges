#include <iostream>
#include <math.h>

int main() {
	int num = 100;
	int sumSquare = (num * (num + 1) * (2 * num + 1))/6;
	int squareSum = pow((num * num + num)/2, 2) + 1;

	std::cout << squareSum - sumSquare << std::endl;
}