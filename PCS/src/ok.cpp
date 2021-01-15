#include <iostream>

int main() 
{
	int n;
	std::cin >> n;
	
	while(n--)
	{
		std::string input;
		std::cin >> input;

		int found = 0;

		for(int i = 0; i < input.length(); i++) 
		{
			found += (input[i] == 'O' && !found);
			found += (input[i] == 'K' && found);

			if(found == 2) {
				break;
			}
		}

		std::cout << (found == 2 ? "YES" : "NO") << std::endl;
	}
}