#include <iostream>
#include <vector>

int sumAround(std::vector<std::string> arr, int i, int j, char val) {
	int sum = 0;
	sum +=  (arr[i].at(j) == val) + (arr[i+1].at(j) == val) + 
			(arr[i].at(j+1) == val) + (arr[i+1].at(j+1) == val);

	return sum;
}

int main() {
	int R, C;
	std::cin >> R >> C;

	std::vector<std::string> parking(R);
	std::vector<int> spaces(5);

	for(int i = 0; i < R; i++) {
		std::cin >> parking[i];
	}

	for(int i = 0; i < R-1; i++) {
		for(int j = 0; j < C-1; j++) {		
			if(sumAround(parking, i, j, '#')) {
				continue;
			}
			
			int numCars = sumAround(parking, i, j, 'X');
			spaces[numCars]++;
		}
	}

	for(int i = 0; i < spaces.size(); i++) {
		std::cout << spaces[i] << std::endl;
	}
}