class Solution {
public:
    int sumCounts(vector<int>& nums) {

    long long ans = 0;

for(int i = 0; i < nums.size(); i++) {
    unordered_map<int,int> mp;
    int ct = 0;

    for(int j = i; j < nums.size(); j++) {
        if(mp[nums[j]] == 0) {
            ct++;
        }

        mp[nums[j]]++;

        ans += ct * ct;
    }
}
return ans ;
    }
};