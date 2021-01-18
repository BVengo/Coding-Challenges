#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, std::pair<std::string, int>> people;

    while(n--)
    {
        std::string date, name;
        int rank;

        std::cin >> name >> rank >> date;

        if(people.find(date) == people.end() || rank > people[date].second) 
        {
            people[date] = {name, rank};
        }
    }

    std::vector<std::string> ordered;
    
    for (auto &it : people) 
    {
        ordered.push_back(it.second.first);
    }
    sort(ordered.begin(), ordered.end());

    std::cout << people.size() << std::endl;
    
    for (std::string name : ordered) 
    {
        std::cout << name << std::endl;
    }
}