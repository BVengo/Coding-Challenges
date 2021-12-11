#include <iostream>

int main() {
    int N, length;

    std::cin >> N >> length;

    N--;

    while(N--) {
        int rod;
        std::cin >> rod;

        length += rod - 1;
    }

    std::cout << length << std::endl;
}