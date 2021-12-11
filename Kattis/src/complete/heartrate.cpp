#include <iostream>

int main() {
    int cases;
    std::cin >> cases;

    while(cases--) {
        double b, p;
        std::cin >> b >> p;

        double ABPM = 60.0/p;
        double BPM = ABPM*b;

        std::cout << BPM-ABPM << ' ' << BPM << ' ' << BPM + ABPM << std::endl;
    }
}
