#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
	int s1, s2, s3, s4;
	std::cin >> s1 >> s2 >> s3 >> s4;

    double half_perim = (s1 + s2 + s3 + s4)/2.0;
	double A = std::sqrt((half_perim - s1) * (half_perim - s2) * (half_perim - s3) * (half_perim - s4));

    std::cout << std::setprecision(7) << A << std::endl;
}