#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    if(N > M) {
        std::swap(N, M);
    }

    for(int i = N + 1; i < M + 2; i++) {
        std::cout << i << std::endl;
    }
}