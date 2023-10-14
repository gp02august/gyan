class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        set<int>s(begin(nums), end(nums));
        vector<int>temp(begin(s), end(s));
        int res = INT_MAX;
        
        for(int i=0; i<temp.size(); i++)
        {
            int left = temp[i];
            int maxiElement = left+n-1;
            
            /*unordered_set<int>s;
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(nums[j]>=left && nums[j]<=maxiElement && (s.find(nums[j])==s.end()))
                {
                    s.insert(nums[j]);
                    continue;
                }
                else
                {
                    cnt++;
                }
            }  */ // their time complexity is O(n^2) so it show TLE..
           int j=upper_bound(begin(temp), end(temp), maxiElement)-begin(temp);
            int within_Range = j-i;
            int outof_Range = n - within_Range;
            res = min(res, outof_Range);
        }
        return res;
    }
};