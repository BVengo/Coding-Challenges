#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        long r, e, c;

        std::cin >> r >> e >> c;
        
        if(r == e-c) {
            std::cout << "does not matter" << std::endl;
        }
        else {
            std::cout << (r > e-c ? "do not " : "") << "advertise" << std::endl;
        }
    }
}
