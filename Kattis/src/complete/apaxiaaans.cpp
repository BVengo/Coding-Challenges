#include <iostream>

int main() {
    std::string name;
    std::cin >> name;

    for(int i = 1; i < name.length(); i++) {
        if(name.at(i) == name.at(i-1)) {
            name.erase(i, 1);
            i--;
        }
    }

    std::cout << name << std::endl;
}