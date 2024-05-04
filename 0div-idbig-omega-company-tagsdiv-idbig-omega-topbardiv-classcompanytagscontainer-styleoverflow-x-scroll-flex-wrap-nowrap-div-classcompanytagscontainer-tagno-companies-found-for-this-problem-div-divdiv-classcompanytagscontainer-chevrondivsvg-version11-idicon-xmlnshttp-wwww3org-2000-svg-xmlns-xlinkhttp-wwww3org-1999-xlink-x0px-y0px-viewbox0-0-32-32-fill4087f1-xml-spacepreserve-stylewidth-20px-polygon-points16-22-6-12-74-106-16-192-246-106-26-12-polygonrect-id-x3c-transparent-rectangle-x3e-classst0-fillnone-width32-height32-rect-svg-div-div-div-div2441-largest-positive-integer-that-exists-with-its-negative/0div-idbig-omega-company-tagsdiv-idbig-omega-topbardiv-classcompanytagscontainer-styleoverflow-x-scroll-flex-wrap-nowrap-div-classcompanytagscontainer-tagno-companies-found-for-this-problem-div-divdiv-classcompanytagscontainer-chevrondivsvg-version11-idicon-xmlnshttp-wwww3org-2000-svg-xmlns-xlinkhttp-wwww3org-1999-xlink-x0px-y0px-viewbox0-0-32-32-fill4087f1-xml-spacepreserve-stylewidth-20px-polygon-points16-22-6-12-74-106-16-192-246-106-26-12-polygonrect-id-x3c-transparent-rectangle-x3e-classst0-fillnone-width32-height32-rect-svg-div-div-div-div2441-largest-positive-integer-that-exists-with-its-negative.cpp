class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi =-1;
        for (int num : nums) {
            if (num > 0 && find(nums.begin(), nums.end(), -num) != nums.end()) {
                maxi =max(maxi, num);
            }
        }
        return maxi;
    }
};