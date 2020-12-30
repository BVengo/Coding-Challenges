#include <iostream>
#include <vector>

int main() {    
    int n;
    std::cin >> n;

    while(n--) {
        int day;
        std::string month;
        std::string sign;

        std::cin >> day >> month;

        if(!month.compare("Jan")) {
            sign = (day >= 21 ? "Aquarius" : "Capricorn");
        }
        else if(!month.compare("Feb")) {
            sign = (day >= 20 ? "Pisces" : "Aquarius");
        }
        else if(!month.compare("Mar")) {
            sign = (day >= 21 ? "Aries" : "Pisces");
        }
        else if(!month.compare("Apr")) {
            sign = (day >= 21 ? "Taurus" : "Aries");
        }
        else if(!month.compare("May")) {
            sign = (day >= 21 ? "Gemini" : "Taurus");
        }
        else if(!month.compare("Jun")) {
            sign = (day >= 22 ? "Cancer" : "Gemini");
        }
        else if(!month.compare("Jul")) {
            sign = (day >= 23 ? "Leo" : "Cancer");
        }
        else if(!month.compare("Aug")) {
            sign = (day >= 23 ? "Virgo" : "Leo");
        }
        else if(!month.compare("Sep")) {
            sign = (day >= 22 ? "Libra" : "Virgo");
        }
        else if(!month.compare("Oct")) {
            sign = (day >= 23 ? "Scorpio" : "Libra");
        }
        else if(!month.compare("Nov")) {
            sign = (day >= 23 ? "Sagittarius" : "Scorpio");
        }
        else if(!month.compare("Dec")) {
            sign = (day >= 22 ? "Capricorn" : "Sagittarius");
        }

        std::cout << sign << std::endl;
    }

}
