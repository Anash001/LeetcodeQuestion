class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> ans( n , vector<int> (n, 0)); 

       int left=0;
       int  right=n-1;
       int top =0;
       int bottom =n-1;
       int count = 1;
       while(left<=right && top<=bottom)
       {
           
           if(top <= bottom && left <= right){
                for(int i = left; i <= right; i++)
                {
                    ans[top][i] = count;
                    count++;
                }
                top++;
            }
            if(top <= bottom && left <= right){
                for(int i = top ;i <= bottom; i++)
                {
                    ans[i][right] = count;
                    count++;
                }
                right-- ;
            }
            if(top <= bottom && left <= right){
                for(int i = right; i >= left; i--)
                {
                    ans[bottom][i] = count;
                    count++;
                }
                bottom--;
            }
            if(top <= bottom && left <= right){
                for(int i = bottom ; i >= top; i--)
                {
                    ans[i][left] = count;
                    count++;
                }
                left++;
            }
        }
        
        return ans;
        
    }
};