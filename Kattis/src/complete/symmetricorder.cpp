#include <iostream>
#include <vector>

int main() {
	int n, set = 0;
	while(std::cin >> n)
	{
		if(n == 0) 
		{
			break;
		}

		set++;

		std::vector<std::string> names;
		while(n--) 
		{
			std::string name;
			std::cin >> name;
			names.push_back(name);
		}

		std::cout << "SET " << set << std::endl;

		for(int i = 0; i < names.size(); i+=2) 
		{
			std::cout << names[i] << std::endl;
		}

		for(int i = names.size() - (names.size() % 2 == 0 ? 1 : 2); i > 0; i-=2) {
			std::cout << names[i] << std::endl;
		}
	}
}