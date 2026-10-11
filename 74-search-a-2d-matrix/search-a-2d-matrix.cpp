class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int tar, int midrow){
        int n = matrix[0].size();
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(matrix[midrow][mid] == tar){
                return true;
            }else if(matrix[midrow][mid] < tar){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int startrow = 0, endrow = m-1;

        while(startrow <= endrow){
            int mid = startrow + (endrow-startrow)/2;

            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                return searchInRow(matrix, target, mid);
            }else if(target > matrix[mid][n-1]){
                startrow = mid+1;
            }else{
                endrow = mid-1;
            }
        }

        return false;
    }
};