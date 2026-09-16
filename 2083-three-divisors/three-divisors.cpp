class Solution {
public:
    bool isThree(int n) {
            int div = 0;
            for(int i=1;i*i<=n;i++){
                if(n%i==0){
                    div++;
                     if(n/i != i){
                    div++;
                }
                }
               
            }
            return (div==3);
    }
};