#include <iostream>

int main() {
	int n;
	char suit;

	std::cin >> n >> suit;

	n *= 4;

	int sum = 0;

	while(n--) {
		std::string task;
		std::cin >> task;
		
		if(task[0] == 'A') {
			sum += 11;
		}
		else if(task[0] == 'K') {
			sum += 4;
		}
		else if(task[0] == 'Q') {
			sum += 3;
		}
		else if(task[0] == 'J') {
			if(task[1] == suit) {
				sum += 20;
			}
			else {
				sum += 2;
			}
		}
		else if(task[0] == 'T') {
			sum += 10;
		}
		else if(task[0] == '9' && task[1] == suit) {
			sum += 14;
		}
	}

	std::cout << sum << std::endl;
}