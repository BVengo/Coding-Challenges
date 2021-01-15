#include <iostream>

int main() {
	int h, m;
	std::cin >> h >> m;

	m -= 45;
	
	if(m < 0) {
		h--;
		m+=60;
	}

	if(h < 0) {
		h = 23;
	}

	std::cout << h << " " << m << std::endl;
}