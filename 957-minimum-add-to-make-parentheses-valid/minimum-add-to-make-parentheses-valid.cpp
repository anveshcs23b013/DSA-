class Solution {
public:
    int minAddToMakeValid(string s) {
        int ct = 0 ;
        stack<int>st ;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(
                    !st.empty()
                ){
                        st.pop();
                }else{
                    ct++;
                }
            }
        }
        while(!st.empty()){
            st.pop();
            ct++;
        }
        return ct;
    }
};