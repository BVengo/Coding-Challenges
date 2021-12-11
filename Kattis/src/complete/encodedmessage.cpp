#include <iostream>
#include <vector>
#include <math.h>

int main() {
	int n;
	std::cin >> n;
	
	while(n--) 
	{
		std::string input;
		std::cin >> input;

		int size = sqrt(input.size());
		std::vector<std::vector<char>> matrix(size, std::vector<char>(size));

		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				matrix[i][j] = input[i*size + j];
			}
		}

		for (int i = size-1; i >= 0; i--) {
			for (int j = 0; j < size; j++) {
				std::cout << matrix[j][i];
			}
		}
		std::cout << std::endl;
	}
}