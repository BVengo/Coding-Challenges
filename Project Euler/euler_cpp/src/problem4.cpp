#include <iostream>

bool isPalindrome(int num) {
	long temp = num;
	int r;
	int sum = 0;
	
	while(num > 0){    
		r = num % 10;  
		sum = (sum * 10)+r;    
		num = num/10;    
	}
		
	return (temp == sum);
}

int main() 
{
	long max = 0;
	for (int i = 999; i > 0; i--) 
	{
		for (int j = i; j > 0; j--) 
		{
			int num = i * j;
			if (isPalindrome(num))
			{
				if(num > max) {
					max = num;
				}
				break;
			}
		}
	}
	std::cout << max << std::endl;
}