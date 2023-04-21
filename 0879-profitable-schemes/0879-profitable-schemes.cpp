class Solution {
public:
    int dp [101][101][101];
    int mod = 1e9 + 7;
    int solve(vector<int>& group, vector<int>& profit, int minProfit, int people, int idx)
    {
        if(people < 0)
            return 0;
        
        if(idx == group.size())
        {
            if(minProfit  > 0)
                return 0;
            
            else
                return 1;
        }
        
        if(minProfit < 0)
            minProfit =0;
        if(dp[minProfit][people][idx] != -1)
            return dp[minProfit][people][idx];
        
        int include = solve (group, profit, minProfit - profit[idx], people - group[idx], idx+1);
        
        int exclude = solve (group, profit, minProfit, people, idx+1);
        
        
         return dp[minProfit][people][idx] = (include%mod + exclude%mod)%mod;
    }
    
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp, -1, sizeof(dp));
        
        int ans = solve (group, profit, minProfit, n, 0);
        return ans;
    }
};