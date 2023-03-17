class Solution {
public:
    void transpose(vector<vector<int>>& matrix, vector<vector<int> >&v)
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(i==j)
                    continue;
                else if(v[i][j]==0)
                {
                    swap(matrix[i][j],matrix[j][i]);
                    v[i][j]=1;
                    v[j][i]=1;
                }
            }
        }
    }
    void target(vector<vector<int>>&matrix)
    {
        int s=matrix[0].size();
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(j<s/2)
                {
                    swap(matrix[i][j], matrix[i][s-j-1]);
                }
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>v(m,vector<int>(n,0));
        transpose(matrix, v);
       target(matrix);
        return ;
    }
};