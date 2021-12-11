#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if(N % 2 != 0) {
        std::cout << "still running" << std::endl;
        return(0);
    }

    int sum = 0;
    N /= 2;

    while(N--) {
        int first, second;
        std::cin >> first >> second;

        sum += (second - first);
    }

    std::cout << sum << std::endl;
}