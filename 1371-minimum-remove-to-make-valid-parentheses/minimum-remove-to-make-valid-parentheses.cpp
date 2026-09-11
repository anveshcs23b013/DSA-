class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st ;
        string ans = s ;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(st.empty()){
                    ans[i] = '#';
                }else{
                    st.pop();
                }
            }
        }

        while(!st.empty()){
            ans[st.top()] = '#';
            st.pop();
        }

        string res ;

        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != '#'){
                res.push_back(ans[i]);
            }
        }

        return res;
    }
};