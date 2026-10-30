class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> mp(101, 0);

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        while(ans.size() < nums.size()) {
            for(int i = 1; i <= 100; i++) {
                if(mp[i] > 0) {
                    ans.push_back(i);
                    mp[i]--;
                }
            }
        }

        return ans;
    }
};