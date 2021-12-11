#include <iostream>

int main() {
    std::string input;
    int pos = 1;

    std::cin >> input;

    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'A') {
            if(pos == 1) {
                pos = 2;
            }
            else if (pos == 2) {
                pos = 1;
            }
        }
        else if(input[i] == 'B') {
            if(pos == 2) {
                pos = 3;
            }
            else if (pos == 3) {
                pos = 2;
            }
        }
        else if(input[i] == 'C') {
            if(pos == 3) {
                pos = 1;
            }
            else if (pos == 1) {
                pos = 3;
            }
        }
    }

    std::cout << pos << std::endl;
}
