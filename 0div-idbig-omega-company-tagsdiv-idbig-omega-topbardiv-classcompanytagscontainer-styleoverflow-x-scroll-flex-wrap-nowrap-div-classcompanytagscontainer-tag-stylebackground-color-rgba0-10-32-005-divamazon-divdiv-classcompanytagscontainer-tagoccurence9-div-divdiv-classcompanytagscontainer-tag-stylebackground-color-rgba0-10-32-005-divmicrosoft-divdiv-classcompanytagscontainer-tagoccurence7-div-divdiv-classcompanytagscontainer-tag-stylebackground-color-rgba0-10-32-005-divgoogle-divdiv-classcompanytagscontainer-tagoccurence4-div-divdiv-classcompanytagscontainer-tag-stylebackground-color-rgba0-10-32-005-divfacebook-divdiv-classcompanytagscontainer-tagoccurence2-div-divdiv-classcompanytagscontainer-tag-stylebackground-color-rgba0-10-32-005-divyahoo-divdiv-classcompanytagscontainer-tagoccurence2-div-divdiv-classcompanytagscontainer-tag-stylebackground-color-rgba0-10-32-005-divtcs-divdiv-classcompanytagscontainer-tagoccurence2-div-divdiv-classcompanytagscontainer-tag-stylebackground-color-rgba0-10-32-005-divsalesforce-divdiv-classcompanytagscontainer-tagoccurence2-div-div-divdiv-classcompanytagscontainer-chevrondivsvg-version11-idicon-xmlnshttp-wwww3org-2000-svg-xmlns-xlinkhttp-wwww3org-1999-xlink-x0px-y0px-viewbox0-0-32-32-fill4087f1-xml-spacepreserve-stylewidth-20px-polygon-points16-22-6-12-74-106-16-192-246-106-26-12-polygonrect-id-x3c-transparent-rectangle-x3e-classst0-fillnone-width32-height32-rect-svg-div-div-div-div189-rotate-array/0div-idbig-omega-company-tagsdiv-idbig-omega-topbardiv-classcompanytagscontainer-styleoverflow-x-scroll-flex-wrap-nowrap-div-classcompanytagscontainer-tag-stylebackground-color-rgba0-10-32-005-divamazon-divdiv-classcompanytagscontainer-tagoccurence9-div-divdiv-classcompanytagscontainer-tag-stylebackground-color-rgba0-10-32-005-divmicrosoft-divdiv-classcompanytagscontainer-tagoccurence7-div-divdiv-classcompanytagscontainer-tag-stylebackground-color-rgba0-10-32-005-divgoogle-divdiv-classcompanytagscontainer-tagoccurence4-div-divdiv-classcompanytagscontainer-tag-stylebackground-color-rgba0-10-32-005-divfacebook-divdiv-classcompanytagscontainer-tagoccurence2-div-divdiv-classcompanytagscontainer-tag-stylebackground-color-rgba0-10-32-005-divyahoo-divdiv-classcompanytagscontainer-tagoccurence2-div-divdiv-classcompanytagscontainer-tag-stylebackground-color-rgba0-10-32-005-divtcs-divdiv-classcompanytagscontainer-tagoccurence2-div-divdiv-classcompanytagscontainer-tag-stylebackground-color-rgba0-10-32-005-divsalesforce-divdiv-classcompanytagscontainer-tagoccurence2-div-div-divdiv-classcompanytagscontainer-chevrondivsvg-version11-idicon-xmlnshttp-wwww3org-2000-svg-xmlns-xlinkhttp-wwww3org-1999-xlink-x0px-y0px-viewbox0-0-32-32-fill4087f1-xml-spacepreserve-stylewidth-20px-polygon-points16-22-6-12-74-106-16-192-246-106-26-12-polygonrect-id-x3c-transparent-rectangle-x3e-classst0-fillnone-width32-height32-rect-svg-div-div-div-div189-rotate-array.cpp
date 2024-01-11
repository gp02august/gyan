class Solution {
public:
    void solve(vector<int>& nums, int start, int end)
    {
        while(start <= end)
        {
            swap(nums[start], nums[end]);
            start++; end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        solve(nums, 0, n-1);
        solve(nums, 0, k-1);
        solve(nums, k, n-1);
    }
};