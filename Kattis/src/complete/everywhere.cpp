#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int cases;
    std::cin >> cases;

    for(int i = 0; i < cases; i++) {
        std::unordered_set<std::string> locations;
        
        int trips;
        std::cin >> trips;

        for(int j = 0; j < trips; j++) {
            std::string place;
            std::cin >> place;
            locations.emplace(place);
        }
        std::cout << locations.size() << std::endl;
    }
}