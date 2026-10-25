class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();

        vector<vector<int>> t(n+1, vector<int>(amount+1, 1e9));

        for(int i = 0; i <= n; i++) {
            t[i][0] = 0;
        }

        for(int i = 1; i < t.size(); i++) {
            for(int j = 1; j < t[0].size(); j++) {

                if(coins[i-1] <= j) {
                    t[i][j] = min(
                        1 + t[i][j-coins[i-1]],
                        t[i-1][j]
                    );
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }

        if(t[n][amount] == 1e9) {
            return -1;
        }

        return t[n][amount];
    }
};