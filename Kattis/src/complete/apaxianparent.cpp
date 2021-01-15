#include<iostream>
#include<string>

int main() {
    std::string s1, s2;
    std::string vowels = "aeiou";

    std::cin >> s1 >> s2;
	
    if(s1.substr(s1.length()-2) == "ex") {
		std::cout << s1 << s2;
	}
    else if(vowels.find(s1[s1.length()-1]) == std::string::npos) {
		std::cout << s1 << "ex" << s2;
	}
    else {
		std::cout << s1.substr(0, s1.length()-1) << "ex" << s2;
	}

	std::cout << std::endl;
}