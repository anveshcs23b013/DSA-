
class Solution {
public:
    void answ(vector<string>& ans, string s, int i, string temp) {
        while (i < s.size() && !isalpha(s[i])) {
            i++;
        }

        if (i == s.size()) {
            ans.push_back(temp);
            return;
        }

        // Choice 1: keep the current case
        answ(ans, s, i + 1, temp);

        // Choice 2: change the case
        if (islower(temp[i])) {
            temp[i] = toupper(temp[i]);
        } else {
            temp[i] = tolower(temp[i]);
        }

        answ(ans, s, i + 1, temp);
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp = s;

        answ(ans, s, 0, temp);

        return ans;
    }
};
