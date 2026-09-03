class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        bool hasOdd = false, hasEven = false;

        // First pass: find the smallest odd
        for (int x : nums1) {
            if (x % 2 == 1) {
                hasOdd = true;
                minOdd = min(minOdd, x);
            } else {
                hasEven = true;
            }
        }

        // Already all odd or all even
        if (!hasOdd || !hasEven)
            return true;

        // Second pass: every even must be greater than the smallest odd
        for (int x : nums1) {
            if (x % 2 == 0 && x < minOdd)
                return false;
        }

        return true;
    }
};