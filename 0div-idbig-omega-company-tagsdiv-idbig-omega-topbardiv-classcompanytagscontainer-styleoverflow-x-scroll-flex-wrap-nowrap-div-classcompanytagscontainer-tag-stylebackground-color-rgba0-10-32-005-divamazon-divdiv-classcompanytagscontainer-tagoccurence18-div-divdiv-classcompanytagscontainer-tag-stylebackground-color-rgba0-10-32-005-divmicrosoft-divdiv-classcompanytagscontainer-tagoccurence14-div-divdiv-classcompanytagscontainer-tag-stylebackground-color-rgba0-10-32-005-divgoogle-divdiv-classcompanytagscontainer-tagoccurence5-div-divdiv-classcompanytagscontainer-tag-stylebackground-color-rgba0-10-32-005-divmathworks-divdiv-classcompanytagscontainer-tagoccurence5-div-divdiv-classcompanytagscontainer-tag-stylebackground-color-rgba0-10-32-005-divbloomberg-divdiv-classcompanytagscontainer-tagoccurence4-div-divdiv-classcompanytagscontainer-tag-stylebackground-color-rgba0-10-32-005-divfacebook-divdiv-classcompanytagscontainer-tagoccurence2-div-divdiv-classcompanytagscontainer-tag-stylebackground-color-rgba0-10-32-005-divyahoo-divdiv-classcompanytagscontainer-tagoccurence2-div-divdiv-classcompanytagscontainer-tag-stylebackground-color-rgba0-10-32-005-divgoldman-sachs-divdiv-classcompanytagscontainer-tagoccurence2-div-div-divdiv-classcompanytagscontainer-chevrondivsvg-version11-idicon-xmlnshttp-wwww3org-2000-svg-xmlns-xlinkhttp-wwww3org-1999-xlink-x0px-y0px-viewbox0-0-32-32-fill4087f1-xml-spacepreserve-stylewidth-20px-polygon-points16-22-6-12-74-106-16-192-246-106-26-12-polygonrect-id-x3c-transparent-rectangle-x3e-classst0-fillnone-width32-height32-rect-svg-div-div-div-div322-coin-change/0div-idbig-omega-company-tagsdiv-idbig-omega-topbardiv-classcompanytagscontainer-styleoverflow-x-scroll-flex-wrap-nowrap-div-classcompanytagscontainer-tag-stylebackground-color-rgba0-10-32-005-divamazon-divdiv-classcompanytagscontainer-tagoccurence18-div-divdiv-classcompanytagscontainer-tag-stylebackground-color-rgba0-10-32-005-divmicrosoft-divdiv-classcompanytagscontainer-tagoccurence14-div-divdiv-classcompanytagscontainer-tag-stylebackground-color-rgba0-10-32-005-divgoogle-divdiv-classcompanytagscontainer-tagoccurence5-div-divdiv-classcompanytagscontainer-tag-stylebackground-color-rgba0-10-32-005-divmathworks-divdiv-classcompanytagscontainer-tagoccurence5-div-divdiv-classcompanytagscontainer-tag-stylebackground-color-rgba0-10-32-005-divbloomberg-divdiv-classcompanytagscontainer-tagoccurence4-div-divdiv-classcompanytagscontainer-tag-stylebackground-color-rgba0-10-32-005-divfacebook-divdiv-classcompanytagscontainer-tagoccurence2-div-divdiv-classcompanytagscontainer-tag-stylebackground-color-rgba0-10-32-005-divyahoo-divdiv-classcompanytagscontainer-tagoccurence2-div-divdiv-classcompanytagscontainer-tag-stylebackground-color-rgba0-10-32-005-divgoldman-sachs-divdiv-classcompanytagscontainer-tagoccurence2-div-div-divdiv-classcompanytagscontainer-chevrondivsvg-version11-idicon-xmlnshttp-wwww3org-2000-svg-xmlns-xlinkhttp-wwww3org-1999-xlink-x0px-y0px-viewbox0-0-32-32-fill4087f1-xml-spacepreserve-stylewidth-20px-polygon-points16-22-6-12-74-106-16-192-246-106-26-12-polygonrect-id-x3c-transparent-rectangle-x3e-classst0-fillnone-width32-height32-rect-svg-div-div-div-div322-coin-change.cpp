class Solution {
private:
    int solve(int amount,vector<int>&coins,int i,vector<vector<int>>&dp)
    {
         int n=coins.size();
         if(amount==0)
              return 0;
          if(i==n)
               return 1e9;
        if(dp[i][amount]!=-1)
             return dp[i][amount]; 
        int pick=1e9;
        if(amount>=coins[i])
             pick=1+solve(amount-coins[i],coins,i,dp);
        int not_pick=solve(amount,coins,i+1,dp);
        return dp[i][amount]=min(pick,not_pick);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
          
          int n=coins.size();
          vector<vector<int>>dp(n,vector<int>(amount+1,-1));
          int ans= solve(amount,coins,0,dp);
          if(ans>=1e9)
                return -1;
          return ans;
           
    }
};