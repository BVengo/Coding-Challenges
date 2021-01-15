#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	int n;
	std::cin >> n;

	n--;
	double t0, v0, area = 0;
	std::cin >> t0 >> v0;
	
	while(n--) {
		double t, v;
		std::cin >> t >> v;
		
		area += (std::max(t0, t) - std::min(t0, t)) * (v0 + v);

		t0 = t;
		v0 = v;
	}

	area /= 2000.0;

	std::cout << std::fixed << std::setprecision(6) << area << std::endl;
}