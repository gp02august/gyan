class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        long long sum=0, psum=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<sum)
            {
                psum = sum+nums[i];
            }
            sum +=nums[i];
        }
        return psum==0? -1: psum;
    }
};