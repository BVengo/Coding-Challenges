#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> nums(4);

	for(int i = 0; i < 4; i++) {
		std::cin >> nums[i];
	}

	std::sort(nums.begin(), nums.end());
	std::cout << nums[0]*nums[2] << std::endl;
}