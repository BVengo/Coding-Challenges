#include <iostream>
#include <vector>

int main() {
	std::vector<int> required = {1, 1, 2, 2, 2, 8};
	
	for(int i = 0; i < 6; i++) {
		int num;
		std::cin >> num;
		std::cout << required[i] - num << (i == 5 ? "" : " ");
	}
	std::cout << std::endl;
}