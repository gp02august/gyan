class Solution {
public:
    int dp [3001][5001];
    int solve(int indx, vector<int>&coins, int amt)
    {
        if(indx == coins.size())
            return 0;
        if(amt ==0)
            return 1;
        
        if(dp[indx][amt] != -1)
            return dp[indx][amt];
        
        if(coins[indx] > amt)
            return dp[indx][amt]=solve(indx+1, coins, amt);
        
        int take = solve(indx, coins, amt-coins[indx]);
        int not_take = solve(indx+1, coins, amt);
        
        return dp[indx][amt]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,coins, amount);
    }
};