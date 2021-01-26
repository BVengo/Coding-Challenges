#include <iostream>

int main() {
	std::string possible, requested;
	std::cin >> possible >> requested;

	std::cout << (possible.length() >= requested.length() ? "go" : "no") << std::endl;
}