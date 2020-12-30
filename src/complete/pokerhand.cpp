#include <iostream>
#include <map>

int main() {
    std::string s;
	std::map<char,int> m;

    for(int i = 0; i < 5; i++) {
		std::cin >> s;
        m[s[0]]++;
    }
	
    int best = 0;
    for(auto i : m) {
        best = (best > i.second ? best : i.second);
    }

    std::cout << best << std::endl;
}