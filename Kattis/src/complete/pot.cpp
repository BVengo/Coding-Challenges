#include <iostream>
#include <math.h>

int main() {
    long entries;
    long X = 0;

    std::cin >> entries;

    for(int i = 0; i < entries; i++) {
        int num;
        int power;

        std::cin >> num;

        power = num % 10;
        num /= 10;

        X += pow(num, power);
    }

    std::cout << X << std::endl;
}
