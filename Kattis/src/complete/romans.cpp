#include <iostream>

int main() {
	float miles;
	std::cin >> miles;

	int ans = miles * 1000.0 * (5280.0 / 4854.0) + 0.5;

	std::cout << ans << std::endl;
}