class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    vector<int>ans;
    int n=nums.size();
    k=k%nums.size();
   
     
    
        reverse(nums.begin(),nums.end());
    

    
    
    
        reverse(nums.begin(),nums.begin()+k);

   
        reverse(nums.begin()+k,nums.end());
    

    }
};