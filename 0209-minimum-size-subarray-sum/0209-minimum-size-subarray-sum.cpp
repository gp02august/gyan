class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int n =nums.size();
        int ans=n+1;
        int window =0;
        for(int right=0; right<n; right++)
        {
            window +=nums[right];
            while(window>=target)
            {
                ans=min(ans,right-left+1);
                window -=nums[left];
                left++;
            }
        }
        return ans==n+1?0:ans;
    }
};