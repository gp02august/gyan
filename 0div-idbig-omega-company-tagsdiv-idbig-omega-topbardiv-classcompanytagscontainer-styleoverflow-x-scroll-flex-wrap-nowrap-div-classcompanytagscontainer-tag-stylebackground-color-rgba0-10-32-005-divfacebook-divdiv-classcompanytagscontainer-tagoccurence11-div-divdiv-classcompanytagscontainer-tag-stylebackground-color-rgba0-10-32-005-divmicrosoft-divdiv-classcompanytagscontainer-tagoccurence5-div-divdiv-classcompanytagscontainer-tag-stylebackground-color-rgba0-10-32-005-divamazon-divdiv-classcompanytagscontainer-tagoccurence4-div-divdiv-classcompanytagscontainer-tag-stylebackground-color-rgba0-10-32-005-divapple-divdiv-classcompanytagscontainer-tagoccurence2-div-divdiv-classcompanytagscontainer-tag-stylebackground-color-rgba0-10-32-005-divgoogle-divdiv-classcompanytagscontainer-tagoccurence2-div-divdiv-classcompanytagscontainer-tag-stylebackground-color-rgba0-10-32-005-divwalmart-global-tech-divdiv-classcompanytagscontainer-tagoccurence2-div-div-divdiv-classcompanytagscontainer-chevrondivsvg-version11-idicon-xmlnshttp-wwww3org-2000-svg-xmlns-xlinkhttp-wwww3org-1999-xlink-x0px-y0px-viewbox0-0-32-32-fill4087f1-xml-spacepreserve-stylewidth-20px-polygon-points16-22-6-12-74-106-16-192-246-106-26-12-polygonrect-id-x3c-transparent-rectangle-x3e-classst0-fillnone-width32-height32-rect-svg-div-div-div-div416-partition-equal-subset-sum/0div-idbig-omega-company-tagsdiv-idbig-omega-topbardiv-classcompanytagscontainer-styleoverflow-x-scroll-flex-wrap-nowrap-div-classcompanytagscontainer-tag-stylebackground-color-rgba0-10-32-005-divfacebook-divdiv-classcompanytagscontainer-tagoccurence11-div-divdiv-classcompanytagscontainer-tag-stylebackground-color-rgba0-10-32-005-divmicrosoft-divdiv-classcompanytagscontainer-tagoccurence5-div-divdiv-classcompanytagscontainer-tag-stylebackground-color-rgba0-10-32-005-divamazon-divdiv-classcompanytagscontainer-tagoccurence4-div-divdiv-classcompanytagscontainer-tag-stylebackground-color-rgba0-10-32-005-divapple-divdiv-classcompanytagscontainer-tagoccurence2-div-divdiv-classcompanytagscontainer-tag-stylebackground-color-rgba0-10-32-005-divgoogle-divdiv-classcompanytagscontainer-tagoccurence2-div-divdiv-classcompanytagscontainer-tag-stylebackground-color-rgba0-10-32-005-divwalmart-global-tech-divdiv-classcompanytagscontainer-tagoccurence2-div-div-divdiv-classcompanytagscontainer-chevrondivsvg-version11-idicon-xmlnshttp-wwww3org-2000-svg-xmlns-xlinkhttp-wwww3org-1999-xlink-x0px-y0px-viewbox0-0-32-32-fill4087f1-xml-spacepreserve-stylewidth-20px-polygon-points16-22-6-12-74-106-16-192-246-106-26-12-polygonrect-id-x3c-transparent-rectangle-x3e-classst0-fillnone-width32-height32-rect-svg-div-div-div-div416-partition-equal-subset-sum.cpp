class Solution {
public:
    vector<vector<int>>t;
    bool solve(vector<int>& nums, int sum, int n)
    {
        if(n==0) return false;
        if(sum==0) return true;
        
        if(t[n][sum] != -1)
        {
            return t[n][sum];
        }
        
        if(nums[n-1]<=sum)
        {
            return t[n][sum]=solve(nums, sum-nums[n-1], n-1) || solve(nums, sum, n-1);
        }
        else
        {
            return t[n][sum]=solve(nums, sum, n-1);
        }
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        
        int sum =0;
        for(int i=0; i<n; i++)
        {
            sum +=nums[i];
        }
        int target = sum / 2;
        t.assign(n + 1, vector<int>(target + 1, -1));
        if(sum%2 == 0)
        {
            return t[n][sum/2]=solve(nums, sum/2, n);
        }
        return false;
    }
};