class Solution {
public:
    int dp[101][101];
    
    int solve(vector<vector<int>> &grid, int i, int j,int m, int n)
    {
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==1)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(i==m-1 && j==n-1)
            return 1;
        
        int right = solve(grid, i, j+1,m,n);
        int down = solve(grid, i+1, j,m,n);
        
        return dp[i][j] = right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        memset(dp,-1,sizeof(dp));
        return solve(obstacleGrid, 0,0, m,n);
    }
};