#include <iostream>

int main() {
    int megabytes = 0;
    int months = 0;

    std::cin >> megabytes >> months;

    int rem = megabytes;
    for(int i = 0; i < months; i++) {
		int temp;
		std::cin >> temp;

		rem += megabytes - temp;
    }

    std::cout << rem << std::endl;
}
