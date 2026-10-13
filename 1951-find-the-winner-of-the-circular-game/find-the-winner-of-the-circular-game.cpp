class Solution {
public:
    int ans(vector<int>v,int n ,int idx,int k){
        if(v.size()==1){
            return v[0]; 
        }

         idx = (idx + k-1)% v.size();
        v.erase(v.begin()+idx);
        return  ans(v,n,idx,k);


    }
    int findTheWinner(int n, int k) {
        vector<int>v(n,0);
        for(int i = 0;i<n;i++){
            v[i]=(i+1);
        }

    int idx  = 0;
        return ans(v,n,idx,k);
    }
};