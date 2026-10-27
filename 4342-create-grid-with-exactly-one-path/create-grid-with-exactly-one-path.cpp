class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string str = "";

        for(int i = 0; i < n; i++) {
            str += '#';
        }

        vector<string> ans;

        for(int i = 0; i < m; i++) {
            ans.push_back(str);
        }

        for(int j = 0; j < n; j++) {
            ans[0][j] = '.';
        }

        for(int i = 0; i < m; i++) {
            ans[i][n-1] = '.';
        }

        return ans;
    }
};