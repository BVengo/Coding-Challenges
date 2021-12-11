#include <iostream>

int main() {
    int n;
    std::cin >> n;  

    int sum = 0;

    while(n--) {
        long t;
        std::cin >> t;

        sum += t < 0;
    }

    std::cout << sum << std::endl;
}