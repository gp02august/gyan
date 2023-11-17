class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result =0;
        int left=0;
        int right = nums.size()-1;
        while(left < right)
        {
            int ans = nums[left]+nums[right];
            result = max (result, ans);
            left++;
            right--;
        }
        return result;
    }
};
//using two pointers approach.