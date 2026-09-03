class Solution {
public:
    int countOdds(int low, int high) {
        int l= low%2; ;
        int h = high%2 ;
        int x = (high-low)/2;
        // both are odd 
        if(l==1&&h==1){
            
            return (x+1);
        }
        // both are even 
        if(l==0&&h==0){
            return (x);
        }else{
                // one even one odd
          return (x+1);      
        }
        
    }
};