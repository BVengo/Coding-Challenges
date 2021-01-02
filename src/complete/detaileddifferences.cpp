#include <iostream>

int main() {
	int n;
	std::cin >> n;

	while(n--) {
		std::string s1, s2, out = "";
		std::cin >> s1 >> s2;

		for(int i = 0; i < s1.size(); i++) {
			out.append(s1[i]==s2[i] ? "." : "*");
		}

		std::cout << s1 << "\n" << s2 << "\n" << out << std::endl;
	}
}