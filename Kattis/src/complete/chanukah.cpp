#include <iostream>

int main() {
    int P;

    std::cin >> P;

    while(P--) {
        int K, N;
        std::cin >> K >> N;

        int ans = N * (N+3) / 2;
        
        std::cout << K << " " << ans << std::endl;
    }
}