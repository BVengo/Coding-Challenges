#include <iostream>

int main() {
	int G, S, C;
	std::cin >> G >> S >> C;

	int money = 3*G + 2*S + C;

	std::string victory, treasure;
	if(money < 0) treasure = ""; //edge case
	if(money < 3) treasure = "Copper";
	else if(money < 6) treasure = "Silver";
	else if(money >=6) treasure = "Gold";
	
	if(money < 2) victory = "";
	else if(money < 5) victory = "Estate";
	else if(money < 8) victory = "Duchy";
	else if(money >= 8) victory = "Province";
	
	std::cout << victory << (victory.empty() ? "" : " or ") << treasure << std::endl; //if victory is empty, treasure always is too
}