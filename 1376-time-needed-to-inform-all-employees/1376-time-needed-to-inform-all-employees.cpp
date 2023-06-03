class Solution {
public:
    unordered_map<int, vector<int>>mp;
    int ans = 0;  int maxi = 0;
    void dfs(int manager, vector<int>&informtime)
    {
        maxi = max(maxi, ans);
        for(auto i : mp[manager])
        {
            ans +=informtime[manager];
            dfs(i, informtime);
            ans -=informtime[manager];
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i=0; i<n; i++)
        {
            int val=manager[i];
            if(val != -1)
            {
                mp[val].push_back(i);
            }
        }
        dfs(headID, informTime);
        return maxi;
    }
};