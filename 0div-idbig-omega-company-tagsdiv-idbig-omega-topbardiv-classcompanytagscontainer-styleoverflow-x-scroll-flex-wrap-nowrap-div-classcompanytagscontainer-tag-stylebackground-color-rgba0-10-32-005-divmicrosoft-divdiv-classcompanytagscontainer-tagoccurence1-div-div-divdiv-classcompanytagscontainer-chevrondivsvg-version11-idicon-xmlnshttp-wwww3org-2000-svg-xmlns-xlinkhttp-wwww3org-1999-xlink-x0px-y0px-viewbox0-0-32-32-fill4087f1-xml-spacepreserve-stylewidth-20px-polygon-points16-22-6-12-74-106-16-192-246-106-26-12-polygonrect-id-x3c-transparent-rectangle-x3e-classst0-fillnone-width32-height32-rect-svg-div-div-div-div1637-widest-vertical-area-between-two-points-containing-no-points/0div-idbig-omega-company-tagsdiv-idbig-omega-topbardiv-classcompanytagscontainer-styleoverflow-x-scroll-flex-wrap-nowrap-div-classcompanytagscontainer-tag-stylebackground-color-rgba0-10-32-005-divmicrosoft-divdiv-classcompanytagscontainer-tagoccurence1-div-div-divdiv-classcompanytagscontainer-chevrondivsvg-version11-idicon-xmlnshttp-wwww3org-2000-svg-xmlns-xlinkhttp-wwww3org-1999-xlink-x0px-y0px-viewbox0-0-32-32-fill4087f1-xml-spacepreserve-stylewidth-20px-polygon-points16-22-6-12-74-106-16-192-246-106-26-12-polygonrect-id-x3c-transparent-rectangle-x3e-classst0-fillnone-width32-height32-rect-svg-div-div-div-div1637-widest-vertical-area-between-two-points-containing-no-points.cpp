class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>ans;
        int res = INT_MIN;
        for(auto i:points)
        {
            ans.push_back(i[0]);
        }
        sort(ans.begin(), ans.end());
        
        for(int i=0; i<ans.size()-1; i++)
        {
            res = max(res, ans[i+1]-ans[i]);
        }
        return res;
    }
};