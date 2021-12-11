#include <unordered_map>
#include <iostream>

int main() {
    std::unordered_map<std::string, int> words;

    std::string word;
    while(std::cin >> word) {
        words[word]++;
        if(words[word] > 1) {
            std::cout << "no" << std::endl;
            return 0;
        }
    }

    std::cout << "yes" << std::endl;
}