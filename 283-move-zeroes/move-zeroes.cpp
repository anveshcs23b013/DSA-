class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int slow = 0;
     if(nums.size()==1){return;}

     for(int fast = 1;fast<nums.size();fast++){
       if(nums[slow]!=0){
        slow++;
       }
        if(nums[fast]!=0 && nums[slow]==0){
        swap(nums[slow],nums[fast]);
            slow++;
       }
     }
       
    }
};