class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    sum +=mat[i][j];
                }
                else if(j==row-i-1)
                    sum+=mat[i][j];
            }
        }
        
        return sum;
    }
};