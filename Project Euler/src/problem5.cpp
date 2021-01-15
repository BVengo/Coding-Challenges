#include <iostream>

int main() 
{
	int start = 1, end = 20;
	int ans = end;

	for(int i = start; i <= end; i++) {
		if(ans % i != 0) {
			ans += end;
			i = start;
		}
	}

	std::cout << ans << std::endl;
}