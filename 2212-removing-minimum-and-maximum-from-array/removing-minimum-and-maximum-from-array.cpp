class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int mini = 0, maxi = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maximum) {
                maximum = nums[i];
                maxi = i;
            }
            if (nums[i] < minimum) {
                minimum = nums[i];
                mini = i;
            }
        }

        int n = nums.size();
        int ap = min(mini, maxi);
        int at = max(mini, maxi);

        int op1 = at + 1;
        int op2 = n - ap;
        int op3 = (ap + 1) + (n - at);

        return min(op1, min(op2, op3));
    }
};