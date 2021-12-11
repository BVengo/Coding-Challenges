#include <iostream>
#include <math.h>

int main() {
    int n;
    std::cin >> n;

    int length = pow(4, n/2.0) + 1;

    std::cout << length*length << std::endl;
}
