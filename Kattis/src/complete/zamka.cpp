#include <iostream>

int GetSum(int n) {
	int sum = 0;
	while (n != 0) 
	{ 
		sum = sum + n % 10; 
		n = n/10; 
	} 
	return sum;
}

int main() {
	int L, D, X, N, M;
	std::cin >> L >> D >> X;

	for(int i = L; i <= D; i++) {
		int sum = GetSum(i);
		if(sum == X) {
			N = i;
			break;
		}
	}

	for(int i = D; i >= L; i--) {
		int sum = GetSum(i);
		if(sum == X) {
			M = i;
			break;
		}
	}

	std::cout << N << "\n" << M << std::endl;

}
