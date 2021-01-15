#include <iostream>

int main() {
    int n;
    std::cin >> n;
    while(n--) {
        std::string num;
        std::cin >> num;
        std::cout << num.length() << std::endl;
    }
}