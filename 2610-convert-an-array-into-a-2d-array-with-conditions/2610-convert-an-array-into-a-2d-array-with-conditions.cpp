class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int cnt=1;
        int row=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
                cnt++;
            else
            {
                cnt=1;
            }
            row=max(row,cnt);
        }
        
        cout<<row;
        vector<vector<int>>ans(row);
        for(int i=0; i<nums.size(); i++)
        {
            int idx=0;
            int j;
            for(j=i; j<nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    ans[idx].push_back(nums[i]);
                    idx++;
                }
                else
                {
                    i=j-1;
                    break;
                }
            }
            if(j==nums.size())
                break;
        }
        return ans;
    }
};