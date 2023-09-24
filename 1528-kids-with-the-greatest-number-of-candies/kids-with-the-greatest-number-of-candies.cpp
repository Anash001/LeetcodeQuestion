class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     vector<bool>ans;
     for(int i=0;i<candies.size();i++)
     {  
         int sum=0;
         int count = 0;
        sum=candies[i]+extraCandies;
        
        for(int j=0;j<candies.size();j++){
            if(sum<candies[j])
            {   count = 1;
                ans.push_back(false);
                break;
            }
        }
        if(count == 0){
            ans.push_back(true);
        }
        
     }   
     return ans;
    }
};