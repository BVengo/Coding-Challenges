#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

int main() {
	int l, m, minPrice = -1;
	std::cin >> l >> m;

	std::unordered_map<std::string, std::vector<long>> mowerValues;
	std::vector<std::string> mowerNames;

	std::cin.ignore();

	while(m--) {
		std::string line, mower;
		std::vector<long> values;

		std::getline(std::cin, line);

		mower = line.substr(0, line.find(','));
		line.erase(0, mower.length()+1);

		while(!line.empty()) 
		{
			int end = line.find(',');
			
			if(end == std::string::npos) {
				end = line.length();
			}

			values.push_back(stoi(line.substr(0, end)));
			line.erase(0, (end < line.length() ? end + 1: end));
		}

		mowerValues.emplace(mower, values);
		mowerNames.push_back(mower);
	}

	for(int i = 0; i < mowerNames.size(); i++) 
	{
		std::vector<long> values = mowerValues[mowerNames[i]];
		long time = 0;
		long amountCut = 0;

		while(amountCut < l) 
		{
			for(long i = 0; i < values[2] && amountCut < l; i++) 
			{
				time++;
				amountCut += values[1];
			}
			
			if(amountCut < l) 
			{
				time += values[3];
			}
		}

		if(time <= 10080 && (values[0] < minPrice || minPrice == -1)) 
		{
			minPrice = values[0];
		}
		
		mowerValues[mowerNames[i]].push_back(time);
	}

	bool noMowers = true;
	for(int i = 0; i < mowerNames.size(); i++) 
	{
		std::vector<long> values = mowerValues[mowerNames[i]];
		if(values[4] <= 10080 && values[0] == minPrice) 
		{
			std::cout << mowerNames[i] << std::endl;
			noMowers = false;
		}
	}

	if(noMowers) 
	{
		std::cout << "no such mower" << std::endl;
	}
}

// price, cutting rate, cutting time, recharge time