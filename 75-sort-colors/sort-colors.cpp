class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
       for(int i=1;i<n;i++)
       {
           for(int j=0;j<=n-1-i;j++)
           {
               if(nums[j+1]<nums[j])
               {
                   swap(nums[j+1],nums[j]);
               }
           }
       }  
           
       
    }
};