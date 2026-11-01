class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int min = nums[0]; 
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        int ans = sum - (nums.size() * min);

        return ans;
    }
};