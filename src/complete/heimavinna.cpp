#include <iostream>
#include <string>

int main() {
	std::string input;
	std::cin >> input;

	int sum = 0;
	
	while(!input.empty()) {
		int idxEnd = input.find(';');
		int idxMid = input.find('-');

		if(idxMid != std::string::npos && (idxMid < idxEnd || idxEnd == std::string::npos)) {
			int num1 = stoi(input.substr(0, idxMid));
			int num2 = stoi(input.substr(idxMid+1, idxEnd - idxMid));

			sum += num2-num1 + 1;
		}
		else {
			sum ++;
		}

		idxEnd = (idxEnd == std::string::npos ? idxEnd : idxEnd+1);		
		input.erase(0, idxEnd);
	}
	std::cout << sum << std::endl;
}