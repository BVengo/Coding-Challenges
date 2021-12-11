#include <iostream>

int main() {
	std::string input;
	std::cin >> input;

	int t = 0, c = 0, g = 0;
	for(char ch : input) {
		if(ch == 'T') t++;
		else if(ch == 'C') c++;
		else if(ch == 'G') g++;
	}

	int min;
	if((t < c) && (t < g)) min = t;
    else if(c < g) min = c;
    else min = g;

	std::cout << t*t + c*c + g*g + 7*min;
}