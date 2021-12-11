#include <iostream>
#include <set>

int main() {
	int n, i = 0;
	std::cin >> n;

	std::set<std::string> teams;

	while(n-- && teams.size() < 12) {
		std::string university, name;
		std::cin >> university >> name;

		if(!teams.count(university)) {
			teams.emplace(university);
			std::cout << university << " " << name << std::endl;
		}
	}
}