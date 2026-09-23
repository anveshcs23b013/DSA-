class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> op;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int a = i + 1;
            int b = nums.size() - 1;

            while (a < b) {

                int sum = nums[i] + nums[a] + nums[b];

                if (sum == 0) {

                    op.push_back({nums[i], nums[a], nums[b]});

                    a++;
                    b--;

                    while (a < b && nums[a] == nums[a - 1]) a++;
                    while (a < b && nums[b] == nums[b + 1]) b--;

                }
                else if (sum > 0) {
                    b--;
                }
                else {
                    a++;
                }
            }
        }

        return op;
    }
};