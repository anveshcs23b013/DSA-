class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> nsl(n);
        vector<int> nsr(n);

        stack<int> s;

        // NSL
        for(int i = 0; i < n; i++){

            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }

            if(s.empty()){
                nsl[i] = -1;
            }else{
                nsl[i] = s.top();
            }

            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        // NSR
        for(int i = n-1; i >= 0; i--){

            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }

            if(s.empty()){
                nsr[i] = n;
            }else{
                nsr[i] = s.top();
            }

            s.push(i);
        }

        // Calculate maximum area
        int ans = 0;

        for(int i = 0; i < n; i++){

            int width = nsr[i] - nsl[i] - 1;

            int area = heights[i] * width;

            ans = max(ans, area);
        }

        return ans;
    }
};