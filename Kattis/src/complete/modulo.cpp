#include <iostream>
#include <unordered_map>

int main() {
	std::unordered_map<int, int> modulos;
	int distinct = 0;

	for(int i = 0; i < 10; i++) {
		int num;
		std::cin >> num;

		num %= 42;

		modulos[num]++;
		if(modulos[num] == 1) {
            distinct++;
        }
	}

	std::cout << distinct << std::endl;
}