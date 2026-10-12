class Solution {
public:
void gen(vector<string>& ans, int l,int r,string& s){
            if(l == 0 && r == 0){
                ans.push_back(s);
                return ; 
            }

    if(l>0){
        s += '(';
gen(ans, l-1, r, s);
s.pop_back();
    }
    if(l < r){
    s+=')';
    gen(ans,l,r-1,s);
    s.pop_back();
    }

}



    vector<string> generateParenthesis(int n) {
       
            vector<string>ans ;
            string s = "(";
            gen(ans,n-1,n,s);
            return ans ;
    }
};