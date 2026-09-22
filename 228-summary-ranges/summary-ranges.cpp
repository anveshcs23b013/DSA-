class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;

        if (nums.empty()) return {};

        int ct = 0;
        bool inRange = false;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1] + 1) {
                if (!inRange) {
                    ct = nums[i - 1];
                    inRange = true;
                }
            } else {
                if (!inRange) {
                    v.push_back(to_string(nums[i - 1]));
                } else {
                    v.push_back(to_string(ct) + "->" + to_string(nums[i - 1]));
                    inRange = false;
                }
            }
        }

        if (!inRange) {
            v.push_back(to_string(nums.back()));
        } else {
            v.push_back(to_string(ct) + "->" + to_string(nums.back()));
        }

        return v;
    }
};