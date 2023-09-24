class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int sum ;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {   
            for(int j=i+1;j<n;j++)
            {   sum = 0;
                sum=nums[i]+nums[j];

                if(sum==target)
                {
                   ans = {i,j}; 
                   break;
                }
            }
        }
        return ans;
        
    }
};