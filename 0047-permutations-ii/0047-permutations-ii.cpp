class Solution {
public:
    void solve(vector<int>&nums, int indx, vector<vector<int>>&ans)
    {
        if(indx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        set<int>s;
        for(int i=indx; i<nums.size(); i++)
        {
            if(s.find(nums[i]) != s.end())
                continue;
            s.insert(nums[i]);
            swap(nums[indx], nums[i]);
            solve(nums, indx+1, ans);
            swap(nums[indx], nums[i]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int indx=0;
        solve(nums, indx, ans);
        return ans;
    }
};