class Solution {
public:
    int dp[5001];
    int solve(vector<int>& arr, int k, int indx)
    {
        int n=arr.size();
        
        if(indx >= n)
            return 0;
        
        int curr_ele=-1;
        int res=0;
        
        if(dp[indx]!=-1)
            return dp[indx];
        
        for(int i=indx; i<n && i-indx+1<=k; i++)
        {
            curr_ele = max(curr_ele, arr[i]);
            
            res = max(res,((i-indx+1)*curr_ele)+solve(arr, k, i+1));
        }
        return dp[indx]=res;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(arr, k, 0);
    }
};