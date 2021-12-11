#include <iostream>

int main() {
    int N = 0;
    std::cin >> N;

    while(N--) {
        int K = 0;
        std::cin >> K;
        
        int outlets = 0;

        while(K--) {
            int strip;
            std::cin >> strip;

            outlets += strip-1;
        }

        std::cout << outlets + 1 << std::endl;
    }
}
