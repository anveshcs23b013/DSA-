class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n), suffix(n), ans(n);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            prefix[i] = sum;
            sum += nums[i];
        }

        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = sum;
            sum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = abs(prefix[i] - suffix[i]);
        }

        return ans;
    }
};