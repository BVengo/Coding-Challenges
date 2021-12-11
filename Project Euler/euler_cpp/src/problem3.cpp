#include <iostream>

int main()
{
	long long num = 600851475143;
	long long div = 2;

	while(div < num / div) 
	{
		while(num % div == 0) 
		{
			num /= div;
		}
		div++;
	}

	std::cout << num << std::endl;
}

