#include <iostream>
#include <string>

int main() {
	std::string name;
	std::string initials;

	std::cin >> name;
	
	while(!name.empty()) {
		initials += name[0];

		int idx = name.find('-');
		idx = (idx == std::string::npos ? idx : idx+1);
		name.erase(0, idx);
	}
	std::cout << initials << std::endl;
}
