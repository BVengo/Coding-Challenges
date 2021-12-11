#include <iostream>

int main() {
    int n, v, h;
    std::cin >> n >> v >> h;
    std::cout << (v > n/2 ? v : n-v) * (h > n/2 ? h : n-h) * 4 << std::endl;
}