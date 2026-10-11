class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>b(51,0);
        for(int i=0;i<nums.size();i++){
            b[nums[i]]++;
        }

    int xoro = 0;
        for(int i =0 ;i<b.size();i++){
        if(b[i] == 2){
            xoro ^= i;
        }
        }
    return xoro; 
    }
};