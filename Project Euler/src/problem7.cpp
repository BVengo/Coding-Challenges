#include <iostream>
#include <math.h>
#include <vector>

bool isPrime(int num, std::vector<int> previousPrimes, int numPrimes) {
	for (int i = 0; i < numPrimes; i++) 
	{
		if(previousPrimes[i] > std::sqrt(num))
		{
			return true;
		}

		if(num % previousPrimes[i] == 0)
		{
			return false;
		}
	}
	return true;
}

int main() 
{
	int limit = 10001;

	std::vector<int> primeNumbers;
	primeNumbers.push_back(2);

	int num = 3;
	
	while(primeNumbers.size() < limit) {
		if (isPrime(num, primeNumbers, primeNumbers.size())) 
		{
			primeNumbers.push_back(num);
		}
    	num+=2;
  	}
  	std::cout << primeNumbers[primeNumbers.size() - 1] << std::endl;
}