#include <iostream>

int main() {
    int n;
    while(std::cin >> n && n != -1) {
        int s = 0;
        int t0 = 0;
        while(n--) {
            int v, t;
            std::cin >> v >> t;

            s += ((t - t0) * v);
            t0 = t;
        }

        std::cout << s << " miles" << std::endl;
    }
}