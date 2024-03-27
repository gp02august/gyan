class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prd = 1;
        int i =0; int cnt=0;
        if(k<=1)
            return 0;
        
        for(int j=0; j<n; j++){
            prd *=nums[j];
            while(prd >= k){
                prd /=nums[i];
                i++;
            }
            cnt +=j-i+1;
        }
        return cnt;
    }
};