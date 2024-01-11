class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n= nums.size();
        vector<int>ans;
        if(n==0)
            return 0;
       
        for(auto i : nums)
        {
             int left =0;
             int right = ans.size()-1;
             while(left <= right)
            {
                int mid = left+(right-left)/2;
                if(ans[mid] < i)
                {
                    left=mid+1;
                }
                else
                {
                    right = mid-1;
                }
            }
            if(left == ans.size())
            {
                ans.push_back(i);
            }
            else
            {
                ans[left]=i;
            }
        }
        return ans.size();
    }
};