class Solution {
public:

bool SubsetSum(vector<vector<bool>> mat, vector<int>& nums, int sum){

    for(int i = 1;i<mat.size();i++){
        for(int j= 1;j<mat[0].size();j++){
            if(nums[i-1]<=j){
               mat[i][j] = mat[i-1][j-nums[i-1]] || mat[i-1][j];
            }else{
                mat[i][j] =mat[i-1][j];
            }

        }
       
    }
return mat[nums.size()][sum];
}

    bool canPartition(vector<int>& nums) {
       int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){return false;}
        sum /= 2; 
       vector<vector<bool>> mat(nums.size()+1, vector<bool>(sum+1,false));
    for(int i =0;i<mat.size();i++){
        mat[i][0]= true ;
    }
    return SubsetSum(mat,nums,sum);
        

    }
};