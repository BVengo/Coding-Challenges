#include <iostream>
#include <string>

int main() {
	int X, Y, N;
	std::cin >> X >> Y >> N;

	for(int i = 1; i <= N; i++) {
		std::string output;
		if(i % X == 0) {
			output += "Fizz";
		}
		
		if(i % Y == 0) {
			output += "Buzz";
		}

		if(output.size() == 0) {
			output = std::to_string(i);
		}

		std::cout << output << std::endl;
	}
}