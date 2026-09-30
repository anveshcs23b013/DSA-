class Solution {
public:
    int maxDepth(string s) {
        int ct = 0;
        int maxi = 0;
       for(int i=0;i<s.size();i++){
        if(s[i]== '('){
            ct++;
            maxi = max(ct,maxi);
        }else if(s[i]== ')'){
            ct--;
        }
       }
        return maxi ;
    }
};