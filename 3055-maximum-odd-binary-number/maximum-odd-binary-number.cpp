class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o = 0;

        for(char c : s){
            if(c == '1'){
                o++;
            }
        }

        if(o == 0){
            return s;
        }

        for(int i = 0; i < o-1; i++){
            s[i] = '1';
        }

        for(int i = o-1; i < s.size()-1; i++){
            s[i] = '0';
        }

        s[s.size()-1] = '1';

        return s;
    }
};