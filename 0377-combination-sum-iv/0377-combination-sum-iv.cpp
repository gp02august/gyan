class Solution {
public:
    int dp[201][1001];
    int solve(vector<int>&nums, int n, int indx, int target)
    {
        if(indx >= n  || target < 0)
            return 0;
        if(target == 0)
            return 1;
        if(dp[indx][target] != -1)
            return dp[indx][target];
        
        int include = solve(nums, n, 0, target-nums[indx]);
        int exclude = solve(nums, n, indx+1, target);
        
        return dp[indx][target]= include+exclude;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums, n, 0, target);
    }
};