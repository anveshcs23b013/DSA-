class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v ;
        vector<int>temp;
          int   elem ;
        // v[0][1] = {1}
        for(int i=0;i<numRows;i++){
            for(int j =0;j<=i;j++){
          if(j == 0 || j == i)
             elem = 1;
        else
    elem = v[i-1][j-1] + v[i-1][j];

            temp.push_back(elem);
            }
            v.push_back(temp);
            temp.clear();
        }
return v ;
    }
};