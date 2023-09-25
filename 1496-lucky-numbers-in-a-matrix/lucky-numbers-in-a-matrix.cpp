class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>col;
        int n=matrix.size();//row size
        int m=matrix[0].size();// col size
        for(int i=0;i<n;i++)
        {
            int min=matrix[i][0];//3,9,15
            for(int j=1;j<m;j++)
            {
               if(min>matrix[i][j])
               {
                   min=matrix[i][j];
               }    
            }
            row.push_back(min);
        }
        // max in column
        for(int j=0;j<m;j++)
        {
           int max=matrix[0][j];// 3
            for(int i=1;i<n;i++)
            {
                if(max<matrix[i][j]){
                    max = matrix[i][j];
                }
            }
            col.push_back(max);
        }
        vector<int>res;
        for(int i=0;i<row.size();i++)
        {
            for(int j=0;j<col.size();j++)
            {
                if(row[i]==col[j])
                {
                    res.push_back(row[i]);
                }
            }
        }
        return res;
    }
};