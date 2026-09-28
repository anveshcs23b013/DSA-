class Solution {
public:

    vector<int> NSL(vector<int>& arr){

        stack<int>s;
        vector<int>left;

        for(int i=0;i<arr.size();i++){

            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }

            if(s.empty()){
                left.push_back(-1);
            }else{
                left.push_back(s.top());
            }

            s.push(i);
        }

        return left;
    }

    vector<int> NSR(vector<int>& arr){

        stack<int>s;
        vector<int>right;

        for(int i=arr.size()-1;i>=0;i--){

            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }

            if(s.empty()){
                right.push_back(arr.size());
            }else{
                right.push_back(s.top());
            }

            s.push(i);
        }

        reverse(right.begin(),right.end());

        return right;
    }

    int largestRectangleArea(vector<int>& arr){

        vector<int>left = NSL(arr);
        vector<int>right = NSR(arr);

        int ans = 0;

        for(int i=0;i<arr.size();i++){

            int width = right[i]-left[i]-1;
            int area = arr[i]*width;

            ans = max(ans,area);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.size()==0) return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>height(m,0);

        int ans = 0;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(matrix[i][j]=='1'){
                    height[j]++;
                }else{
                    height[j]=0;
                }
            }

            ans = max(ans,largestRectangleArea(height));
        }

        return ans;
    }
};