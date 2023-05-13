class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int row = nums.size();
        int col = nums[0].size();
        for(int i=0; i<row; i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }
         int sum=0;
        int maxi=INT_MIN;
        for(int j=0; j<col; ++j)
        {
            for(int i=0; i<row; ++i)
            {
                maxi=max(maxi,nums[i][j]);
            }
            
            sum+=maxi;
        }
        return sum;
    }
};