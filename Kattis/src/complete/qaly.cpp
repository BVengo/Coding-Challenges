#include <iostream>
#include <string>

int main() {
    int numPeriods;
    std::string range;

    std::cin >> numPeriods;
    std::getline(std::cin, range);

    double sum = 0;


    for(int i = 0; i < numPeriods; i++) {
        std::getline(std::cin, range);

        std::string::size_type sz;     // alias of size_t
        
        double quality = std::stod(range,&sz);
        double length = std::stod(range.substr(sz));

        sum += (quality * length);
    }

    std::cout << sum << std::endl;
}