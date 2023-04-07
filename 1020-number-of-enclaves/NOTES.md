int count(vector<vector<int>>& grid)
{
int row=grid.size();
int col=grid[0].size();
int ans=0;
for(int i=0; i<row; i++){
for(int j=0; i<col; j++){
if(grid[i][j]==1){
ans++;
}
}
}
return ans;
}
bool isValid(int i, int j, int row, int col, vector<vector<int>>& grid)
{
if(i>=0 && i<row && j>=0 && j<col && grid[i][j]==1){
return true;
}
return false;
}
void dfs(int i, int j, int row, int col, vector<vector<int>>& grid)
{