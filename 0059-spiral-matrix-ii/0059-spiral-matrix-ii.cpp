class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n));
        int row=0;
        int col=0;
        int start=n-1; int end = n-1;
        int cnt =1;
        while(row<=end && col<=start)
        {
            for(int i=col; i<=start; i++)
            {
                ans[row][i]=cnt;
                cnt++;
            }
            row++;
            for(int i=row; i<=end; i++)
            {
                ans[i][start]=cnt;
                cnt++;
            }
            start--;
            
            if(row<=end)
            {
                for(int i=start; i>=col; i--)
                {
                    ans[end][i]=cnt;
                    cnt++;
                }
                end--;
            }
            
            if(col<=start)
            {
                for(int i=end; i>=row; i--)
                {
                    ans[i][col]=cnt;
                    cnt++;
                }
                col++;
            }
        }
        return ans;
    }
};