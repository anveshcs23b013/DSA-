class Solution {
public:

    int algo(vector<vector<int>>& t, vector<int>& nums1, vector<int>& nums2, int m, int n) {
        if(m == 0 || n == 0) {
            return 0;
        }

        if(t[m][n] != -1) {
            return t[m][n];
        }

        if(nums1[m-1] == nums2[n-1]) {
            return t[m][n] = 1 + algo(t, nums1, nums2, m-1, n-1);
        }
        else {
            return t[m][n] = 0;
        }
    }

    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<vector<int>> t(m+1, vector<int>(n+1, -1));

        int ans = 0;

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                ans = max(ans, algo(t, nums1, nums2, i, j));
            }
        }

        return ans;
    }
};