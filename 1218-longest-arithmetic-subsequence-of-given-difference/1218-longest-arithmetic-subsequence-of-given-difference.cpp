class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int,int>mp;
        int ans=0;
        for(auto i: arr)
        {
            mp[i]=1+(mp[i-difference]);
                ans = max(ans,mp[i]);
        }
        return ans;
    }
};