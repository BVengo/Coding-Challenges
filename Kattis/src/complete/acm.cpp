#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> incomplete(26);

	int correct = 0, score = 0;

	int minutes;
	std::cin >> minutes;

	while(minutes != -1) 
	{
		char question;
		std::string value;
		std::cin >> question >> value;

		if(value == "right") {
			correct++;
			score += minutes + incomplete[question-65];
		}
		else
		{
			incomplete[question-65] += 20;
		}

		std::cin >> minutes;
	}

	std::cout << correct << " " << score << std::endl;
}