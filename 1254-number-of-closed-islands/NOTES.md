for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
if(i*j==0 || i==row-1 || j==col-1)
{
if(grid[i][j] == 0)
{
dfs(i, j, row, col, grid);
}
}
}
}
int ans=0;
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
if(grid[i][j] == 0)
{
ans++;
dfs(i, j, row, col, grid);
}
}
}
return ans;
}
};