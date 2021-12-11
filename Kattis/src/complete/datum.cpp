#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> days = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

	int D, M;
	std::cin >> D >> M;

	for(int i = 1; i < M; i++) {
		if(i == 2) {
			D += 28;
		}
		else {
			D += 30 + ((i % 2) != (i >= 8));
		}
	}

	while(D > 7) {
		D-=7;
	}

	std::cout << days[D-1] << std::endl;
}