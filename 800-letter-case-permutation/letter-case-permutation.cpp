
class Solution {
public:
    void answ(vector<string>& ans, string s, int i, string temp) {
        if (i == s.size()) {
            ans.push_back(temp);
            return;
        }

        if (isalpha(temp[i])) {
            answ(ans, s, i + 1, temp);

            if (islower(temp[i])) {
                temp[i] = toupper(temp[i]);
            } else {
                temp[i] = tolower(temp[i]);
            }

            answ(ans, s, i + 1, temp);
        }
        else {
            answ(ans, s, i + 1, temp);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp = s;

        answ(ans, s, 0, temp);

        return ans;
    }
};
