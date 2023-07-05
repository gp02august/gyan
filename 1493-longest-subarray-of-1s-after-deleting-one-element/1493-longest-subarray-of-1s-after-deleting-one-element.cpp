class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int head=0, tail=0, cnt=0, ans=0;
        for(head=0; head<nums.size(); head++)
        {
            if(nums[head]==0)
                cnt++;
            while(cnt>1)
            {
                if(nums[tail]==0)
                    cnt--;
                tail++;
            }
            ans=max(ans, head-tail);
        }
        return ans;
    }
};