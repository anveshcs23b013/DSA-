class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1 ;
    int o = 0 ;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            product *=nums[i];
        }else{
            o++;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(o==0){
            nums[i] = product/nums[i] ;

        }else{
            if(nums[i]==0 && o == 1){
                nums[i] = product ;
            }else{
                nums[i]=0;
            }
        }
    }
return nums; 
        
    }
};