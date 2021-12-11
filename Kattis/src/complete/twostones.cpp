#include <iostream>

int main() {
    int input;
    std::cin >> input;

    std::cout << (input % 2 == 0 ? "Bob" : "Alice") << std::endl;
}