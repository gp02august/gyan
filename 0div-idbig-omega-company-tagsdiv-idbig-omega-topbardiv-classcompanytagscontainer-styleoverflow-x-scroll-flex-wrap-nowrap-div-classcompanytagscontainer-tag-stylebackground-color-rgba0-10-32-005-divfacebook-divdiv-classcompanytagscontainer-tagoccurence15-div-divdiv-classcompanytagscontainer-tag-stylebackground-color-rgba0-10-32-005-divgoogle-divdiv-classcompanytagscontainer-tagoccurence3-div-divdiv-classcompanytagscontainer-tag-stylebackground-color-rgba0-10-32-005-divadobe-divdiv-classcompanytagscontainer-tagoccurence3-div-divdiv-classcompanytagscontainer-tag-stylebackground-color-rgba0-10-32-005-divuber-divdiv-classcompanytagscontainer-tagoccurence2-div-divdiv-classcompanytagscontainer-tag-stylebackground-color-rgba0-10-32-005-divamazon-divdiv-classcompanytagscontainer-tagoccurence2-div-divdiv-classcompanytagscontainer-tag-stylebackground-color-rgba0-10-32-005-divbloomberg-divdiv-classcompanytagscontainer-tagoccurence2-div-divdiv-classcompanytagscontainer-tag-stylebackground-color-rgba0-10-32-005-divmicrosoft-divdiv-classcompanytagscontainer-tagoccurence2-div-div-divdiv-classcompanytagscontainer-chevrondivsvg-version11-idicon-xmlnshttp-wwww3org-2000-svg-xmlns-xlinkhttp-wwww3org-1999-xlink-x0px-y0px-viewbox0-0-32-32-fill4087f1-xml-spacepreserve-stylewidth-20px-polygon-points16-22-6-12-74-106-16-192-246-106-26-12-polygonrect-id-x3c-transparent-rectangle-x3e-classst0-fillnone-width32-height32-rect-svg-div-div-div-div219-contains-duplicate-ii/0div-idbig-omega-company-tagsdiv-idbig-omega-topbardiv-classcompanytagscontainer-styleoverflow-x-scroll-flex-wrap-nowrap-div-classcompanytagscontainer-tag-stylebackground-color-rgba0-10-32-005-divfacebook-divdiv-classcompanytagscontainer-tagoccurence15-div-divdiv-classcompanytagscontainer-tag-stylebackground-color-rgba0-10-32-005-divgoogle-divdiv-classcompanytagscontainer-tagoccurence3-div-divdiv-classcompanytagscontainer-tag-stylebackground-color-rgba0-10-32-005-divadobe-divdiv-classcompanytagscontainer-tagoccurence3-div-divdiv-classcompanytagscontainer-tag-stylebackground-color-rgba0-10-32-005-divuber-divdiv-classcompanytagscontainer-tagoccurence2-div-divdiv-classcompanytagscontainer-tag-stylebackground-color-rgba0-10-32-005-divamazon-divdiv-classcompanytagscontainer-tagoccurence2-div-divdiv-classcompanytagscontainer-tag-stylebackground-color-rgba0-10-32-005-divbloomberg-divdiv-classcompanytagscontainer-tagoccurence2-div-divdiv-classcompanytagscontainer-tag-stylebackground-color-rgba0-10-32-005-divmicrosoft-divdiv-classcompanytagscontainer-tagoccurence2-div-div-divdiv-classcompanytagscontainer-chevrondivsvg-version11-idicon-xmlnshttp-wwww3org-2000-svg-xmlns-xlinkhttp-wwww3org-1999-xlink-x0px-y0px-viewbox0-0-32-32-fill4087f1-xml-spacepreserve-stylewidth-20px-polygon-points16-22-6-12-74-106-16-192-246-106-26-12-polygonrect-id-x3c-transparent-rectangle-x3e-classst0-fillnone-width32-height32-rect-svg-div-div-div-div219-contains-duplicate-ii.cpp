class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]==nums[j] && abs(i-j)<=k){
        //             return true;
        //             break;
        //         }
        //     }
        // }
        // return false;  //tle showed this approach now optimize this solution....
        
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            // Check the current element against the last `k` elements
            for (int j = i + 1; j <= i + k && j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};