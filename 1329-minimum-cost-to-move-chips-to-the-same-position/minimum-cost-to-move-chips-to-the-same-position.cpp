class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
       int even=0 ,odd=0;
        for(int i=0;i<n;i++)
        {
            if(position[i]%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        return min(even ,odd);
             
    }
};