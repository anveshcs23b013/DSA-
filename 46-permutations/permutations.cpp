
class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& temp, int start) {
        if(start == temp.size()) {
            ans.push_back(temp);
            return;
        }

        for(int i = start; i < temp.size(); i++) {
            swap(temp[start], temp[i]);

            solve(ans, temp, start + 1);

            swap(temp[start], temp[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int start = 0;

        solve(ans, nums, start);

        return ans;
    }
};
