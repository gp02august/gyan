class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int m;
        for(int i= nums.size()-1; i>=0; i--)
        {
            if(k>0)
            m=nums[i];
             k--;
        }
            return m;
    }
};