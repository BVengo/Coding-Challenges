#define PI acos(-1.0)
#define G 9.81
#define BUFFER 1e-10

#include <iostream>
#include <math.h>

int main() {
    int n;
    std::cin >> n;

    while(n--) {
        double v, theta, x1, h1, h2, t, y;
        std::cin >> v >> theta >> x1 >> h1 >> h2;

        t = x1 / (v * cos(theta * PI / 180.0));
        y = x1 * tan(theta * PI / 180.0) - 0.5 * G * t * t;
        
        std::cout << (y - h1 - 1 > BUFFER && h2 - y - 1 > BUFFER ? "" : "Not ") << "Safe" << std::endl;
    }
}