class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());

        int result = -1;

        for (int num : nums2) {
            if (set1.count(num)) {
                if (result == -1 || num < result) {
                    result = num;
                }
            }
        }

        return result;
    }
};