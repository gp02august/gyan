bool isValid(int i, int j, int row, int col, vector<vector<int>>& grid)
{
if(i>=0 && i<row && j>=0 && j<col && grid[i][j] == 0)
{
return true;
}
return false;
}
void dfs(int i, int j, int row, int col, vector<vector<int>>& grid)
{
grid[i][j]=1;
int ax[4]={1,-1, 0, 0};
int ay[4]={0, 0, 1, -1};
for(int k=0; k<4; k++)
{
int nx=i+ax[k];
int ny=i+ay[k];
if(isValid(nx, ny, row, col, grid))
{
dfs(nx, ny, row, col, grid);
}
}
}
int closedIsland(vector<vector<int>>& grid) {
int row = grid.size();
int col = grid[0].size();
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
if(i*j==0 || i==row-1 || j==col-1)
{
if(grid[i][j] == 0)