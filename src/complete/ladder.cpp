#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main() {
	int h, v;
	std::cin >> h >> v;

	if(v > 90) {
		v = 90;
	}

	std::cout << ceil(h/sin(v * M_PI/180)) << std::endl;
}