
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1;

        char c = target;

        while(l<=r){
            int mid = l + (r-l)/2;

            if(letters[mid] > target){
                c = letters[mid];
                r = mid-1;
            }else{
                l = mid+1;
            }
        }

        if(c!=target){
            return c;
        }

        return letters[0];
    }
};
