class Solution {
public:

    int algo(vector<vector<int>>&t,string a,string b,int m,int n){
        if(m == 0 || n == 0){
            return 0;
        }
        if(t[m][n]!= -1){
            return t[m][n];
        }
        if(a[m-1] == b[n-1]){
            return t[m][n] = 1+algo(t,a,b,m-1,n-1);
        }else{
            return t[m][n] = max(algo(t,a,b,m,n-1),algo(t,a,b,m-1,n));
        }
    }
    int minDistance(string a, string b) {
        int m = a.size();
        int n = b.size();
        vector<vector<int>>t(m+1,vector<int>(n+1,-1));


return (m+n-(2 *(algo(t,a,b,m,n))));
    }
};