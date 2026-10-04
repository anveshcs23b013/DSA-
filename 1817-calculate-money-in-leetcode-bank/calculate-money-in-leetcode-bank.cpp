class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int i = 0;

        while(n) {
            if(n / 7 >= 1) {
                sum += 28 + (7 * i);
                n -= 7;
            } 
            else {
                int k = n % 7;
                sum += (k * (k + 1)) / 2 + (k * i);
                n -= k;
            }

            i++;
        }

        return sum;
    }
};