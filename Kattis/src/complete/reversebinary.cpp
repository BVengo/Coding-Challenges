#include <iostream>
#include <algorithm>
#include <math.h>

int main() {
	int n;
	std::string s;
	std::cin >> n;

    while(n!=0) 
	{
		s = (n % 2 == 0 ? "0" : "1") + s; 
		n/=2;
	}

	std::reverse(s.begin(), s.end());

	for(int i = 0; i < s.length(); i++) 
	{
		if(s[s.length()-i-1] == '1') {
			n += pow(2, i);
		}
	}

	std::cout << n << std::endl;
}