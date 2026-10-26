class Solution {
public:

    int algo(vector<vector<int>>& t, string& s1, string& s2, int m, int n) {
        if(m == 0 || n == 0) {
            return 0;
        }

        if(t[m][n] != -1) {
            return t[m][n];
        }

        if(s1[m-1] == s2[n-1]) {
            return t[m][n] = 1 + algo(t, s1, s2, m-1, n-1);
        }
        else {
            return t[m][n] = max(algo(t, s1, s2, m-1, n),
                                 algo(t, s1, s2, m, n-1));
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();

        vector<vector<int>> t(m+1, vector<int>(n+1, -1));

        return algo(t, text1, text2, m, n);
    }
};