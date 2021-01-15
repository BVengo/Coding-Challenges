#include <iostream>

int main() {
	int id, maxGrade = 0;

	for(int i = 1; i <= 5; i++) {
		int grade = 0;
		for(int j = 0; j < 4; j++) {
			int points;
			std::cin >> points;

			grade += points;
		}

		if(grade > maxGrade) {
			id = i;
			maxGrade = grade;
		}
	}

	std::cout << id << " " << maxGrade << std::endl;
}