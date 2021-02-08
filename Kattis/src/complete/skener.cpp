#include <iostream>

int main() {
    int R, C, Zr, Zc;
    std::cin >> R >> C >> Zr >> Zc;

    for(int i = 0; i < R; i++) 
    {
        std::string row, newRow;
        std::cin >> row;

        for(char c : row) {
            for(int i = 0; i < Zc; i++) {
                newRow += c;
            }
        }

        for(int i = 0; i < Zr; i++) {
            std::cout << newRow << std::endl;
        }
    }
}