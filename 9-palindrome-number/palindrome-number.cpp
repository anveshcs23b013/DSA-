class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

            int rev = 0;

    // i am reversing half the interger and checking 
            while(x>rev){
                rev = rev * 10 + x % 10;
            x /= 10;
            } 
            return rev ==x || x==rev/10 ;
    }
};