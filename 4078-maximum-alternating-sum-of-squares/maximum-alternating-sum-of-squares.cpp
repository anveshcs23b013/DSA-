class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) {
                nums[i] = nums[i] * (-1);
            }
        }

        sort(nums.begin(), nums.end());

        long long sum = 0;
        int n = nums.size();

        for(int i = 0; i < n / 2; i++) {
            sum -= 1LL * nums[i] * nums[i];
        }

        for(int i = n / 2; i < n; i++) {
            sum += 1LL * nums[i] * nums[i];
        }

        return sum;
    }
};