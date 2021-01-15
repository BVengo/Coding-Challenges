#include <iostream>

void rotate(std::string &s) {
	int rot = 0;
	for(char c : s) {
		rot += c - 65;
	}
	
	while(rot > 26) {
		rot -= 26;
	}

	for(int i = 0; i < s.size(); i++) {
		s[i] = s[i] + rot;
		if(s[i] > 90) {
			s[i] -= 26;
		}
	}
}

int main() {
	std::string input, a, b;
	std::cin >> input;

	a = input.substr(0, input.size()/2);
	b = input.substr(input.size()/2, input.size());

	rotate(a);
	rotate(b);

	for(int i = 0; i < a.size(); i++) {
		a[i] = a[i] + b[i] - 65;
		if(a[i] > 90) {
			a[i] -= 26;
		}
	}

	std::cout << a << std::endl;
}