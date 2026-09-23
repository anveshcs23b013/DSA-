class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int ans = 0;
        string op = "";

        for(int i = 0; i < dictionary.size(); i++){
            int a = 0, b = 0;

            while(a < s.size() && b < dictionary[i].size()){
                if(s[a] == dictionary[i][b]){
                    b++;
                }
                a++;
            }

            if(b == dictionary[i].size()){
                if(dictionary[i].size() > ans){
                    ans = dictionary[i].size();
                    op = dictionary[i];
                }
                else if(dictionary[i].size() == ans && dictionary[i] < op){
                    op = dictionary[i];
                }
            }
        }

        return op;
    }
};