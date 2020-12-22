#include <iostream>
#include <vector>

int main() {
    int s, t, n;
    std::cin >> s >> t >> n;

    int time = 0;

    std::vector<int> walks;
    std::vector<int> busLength;
    std::vector<int> busInterval;

    for(int i = 0; i <= n; i++) {
        int walk;
        std::cin >> walk;
        walks.push_back(walk);
    }

    for(int i = 0; i < n; i++) {
        int ride;
        std::cin >> ride;
        busLength.push_back(ride);
    }

    for(int i = 0; i < n; i++) {
        int interval;
        std::cin >> interval;
        busInterval.push_back(interval);
    }

    time += walks[0];

    for(int i = 0; i < n; i++) {
        int rem = time%busInterval[i];
        time += (rem == 0 ? rem : busInterval[i] - rem) + busLength[i] + walks[i+1]; 
    }

    std::cout << (t - time < s ? "no" : "yes") << std::endl;
}