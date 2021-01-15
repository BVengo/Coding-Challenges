#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    char prev = ' ';
    int sum = 0;

    while(n--) {
        char curr = ' ';
        std::cin >> curr;
        sum += (curr==prev);
        prev = curr;
    }
    
    std::cout << sum << std::endl;
}
