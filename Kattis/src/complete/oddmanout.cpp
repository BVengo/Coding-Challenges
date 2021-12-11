#include <iostream>
#include <unordered_map>

int main() {
    int N;
    std::cin >> N;

    for(int i = 1; i <= N; i++) 
    {
        int G;
        std::cin >> G;

        std::unordered_map<int, int> guests(G/2);

        while(G--) 
        {
            int val;
            std::cin >> val;

            if(guests.find(val) == guests.end()) 
            {
                guests[val] = 1;
            }
            else 
            {
                guests[val]++;
            }            
        }

        for (auto& it : guests) {
            if(it.second % 2 != 0) 
            {
                std::cout << "Case #" << i << ": " << it.first << std::endl;
                break;
            }
        }
    }
}