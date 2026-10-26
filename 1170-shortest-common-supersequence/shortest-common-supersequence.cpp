class Solution {
public:

    int lcs(vector<vector<int>>& t, string& a, string& b, int m, int n) {
        if(n == 0 || m == 0) {
            return 0;
        }

        if(t[m][n] != -1) {
            return t[m][n];
        }

        if(a[m-1] == b[n-1]) {
            return t[m][n] = 1 + lcs(t,a,b,m-1,n-1);
        }
        else {
            return t[m][n] = max(lcs(t,a,b,m,n-1),lcs(t,a,b,m-1,n));
        }
    }

    string shortestCommonSupersequence(string a, string b) {
        int m = a.size();
        int n = b.size();

        vector<vector<int>> t(m+1,vector<int>(n+1,-1));

        int x = lcs(t,a,b,m,n);
        int scs = m+n-x;

        int i = m, j = n;
        string s = "";

        while(i > 0 && j > 0) {
            if(a[i-1] == b[j-1]) {
                s.push_back(a[i-1]);
                i--;
                j--;
            }
            else {
                if(lcs(t,a,b,i,j-1) > lcs(t,a,b,i-1,j)) {
                    j--;
                }
                else {
                    i--;
                }
            }
        }

        reverse(s.begin(),s.end());

        string ans = "";
        i = 0;
        j = 0;

        for(int k = 0; k < s.size(); k++) {

            while(i < m && a[i] != s[k]) {
                ans.push_back(a[i]);
                i++;
            }

            while(j < n && b[j] != s[k]) {
                ans.push_back(b[j]);
                j++;
            }

            ans.push_back(s[k]);
            i++;
            j++;
        }

        while(i < m) {
            ans.push_back(a[i]);
            i++;
        }

        while(j < n) {
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
};