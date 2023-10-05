class Solution {
public:
    int mySqrt(int x) {
        int res=0;
        if(x == 1){
            res = x;
        }
        else{
            int s=1;
            int e = x/2;
            while(s<=e){
            int mid=s+(e-s)/2;
                
                if(mid==x/mid)
                {
                    res= mid;
                    break;
                }
                else if(mid>x/mid)
                {
                    e=mid-1;
                }
                else 
                {
                    res = mid;
                    s=mid+1;
                }
            }

        }
        
       return res ;


        
    }
};