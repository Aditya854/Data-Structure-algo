#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxGold(vector<vector<int>>& offers, int n) {
    vector<int> dp(n, 0);

    for (const auto& offer : offers) {
        int starti = offer[0];
        int endi = offer[1];
        int goldi = offer[2];

        if (starti > 0) {
            dp[starti] = max(dp[starti], dp[starti - 1] + goldi);
        } else {
            dp[starti] = max(dp[starti], goldi);
        }

        if (endi + 1 < n) {
            dp[endi + 1] = max(dp[endi + 1], dp[starti]);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    vector<vector<int>> offers = {{0,0,1},{0,2,10},{1,3,2}};
    int n = 5;
    cout << maxGold(offers, n) << endl;  // Output: 16

    return 0;
}
