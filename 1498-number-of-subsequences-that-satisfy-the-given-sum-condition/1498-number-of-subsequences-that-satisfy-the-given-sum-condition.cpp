class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cnt=0;
        int mod = 1e9+7;
        vector<int>pow(nums.size(),1);
        
        int start = 0; 
        int end = nums.size()-1;
        
        for(int i=1; i<nums.size(); i++)
        {
            pow[i] = (pow[i-1]*2)%mod;
        }
        while(start<=end)
        {
            if(nums[start]+nums[end] > target)
            {
                end--;
            }
            
            else
            {
                cnt = (cnt + pow[end-start])%mod;
                start++;
            }
        }
        
        return cnt;
    }
};