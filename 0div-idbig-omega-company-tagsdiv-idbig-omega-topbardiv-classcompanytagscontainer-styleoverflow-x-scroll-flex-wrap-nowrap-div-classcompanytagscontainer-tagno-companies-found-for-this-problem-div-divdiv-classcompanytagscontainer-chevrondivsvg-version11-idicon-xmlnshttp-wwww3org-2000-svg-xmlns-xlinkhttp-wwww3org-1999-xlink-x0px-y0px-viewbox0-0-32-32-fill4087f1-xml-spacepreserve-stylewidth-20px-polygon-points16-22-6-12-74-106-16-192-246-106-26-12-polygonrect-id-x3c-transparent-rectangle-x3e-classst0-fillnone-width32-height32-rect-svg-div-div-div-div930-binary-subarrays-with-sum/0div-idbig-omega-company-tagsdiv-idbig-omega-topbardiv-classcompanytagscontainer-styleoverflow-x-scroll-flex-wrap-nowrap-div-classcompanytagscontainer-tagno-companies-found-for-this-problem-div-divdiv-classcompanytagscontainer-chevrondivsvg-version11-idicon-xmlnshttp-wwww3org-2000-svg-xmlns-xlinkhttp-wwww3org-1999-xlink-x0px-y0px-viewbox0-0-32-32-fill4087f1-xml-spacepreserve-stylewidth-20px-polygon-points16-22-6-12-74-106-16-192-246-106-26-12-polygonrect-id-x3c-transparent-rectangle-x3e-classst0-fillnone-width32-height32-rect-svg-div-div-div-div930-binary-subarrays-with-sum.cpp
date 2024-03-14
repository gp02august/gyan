class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int i=0; int j=0;
        int sum = 0; int cnt=0;
        unordered_map<int, int> prefixSumCount;

        for (int j = 0; j < n; j++) {
            sum += nums[j];
            if (sum == goal) 
                cnt++;

            if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) 
                cnt += prefixSumCount[sum - goal];

            prefixSumCount[sum]++;
        }
        return cnt;
    }
};