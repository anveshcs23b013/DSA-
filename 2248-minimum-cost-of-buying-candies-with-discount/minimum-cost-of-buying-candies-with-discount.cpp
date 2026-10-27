class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum = 0;

        sort(cost.begin(), cost.end());

        int x = cost.size();
        int ii = 0;

        for(int i = x-1; i >= 0; i--) {
            if(ii % 3 == 2) {
                ii++;
                continue;
            }

            sum += cost[i];
            ii++;
        }

        return sum;
    }
};