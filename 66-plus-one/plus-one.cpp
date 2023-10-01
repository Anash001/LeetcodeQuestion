class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       vector<int>ans(n);
       for(int i=n-1;i>=0;i--)
       {
           if(digits[i] != 9){
               digits[i] = digits[i] + 1;
               break;
           }
           else{
               if(i == 0){
                   digits[i] = 1;
                   digits.push_back(0);
                   break;
               }else{
                   digits[i] = 0;
               }
           }
       }
       return digits;
     
      
    }
};