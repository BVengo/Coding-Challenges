#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int value;
        std::cin >> value;

        std::cout << value << " is " << (value % 2 == 0 ? "even" : "odd") << std::endl;
    }
}
