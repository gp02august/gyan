class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
           if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return min(min(nums[0],nums[1])*1LL*2+x,nums[0]*1LL+nums[1]);
        }
        int k = nums.size();
        int n = k,i,y;
        long long int sum = 0, ans = LONG_LONG_MAX;
        while(k--){
            sum = 0;
            for(i = 0; i < n; i++){
                sum += nums[i];
            }
            ans = min(ans,sum+(n-(k+1))*1LL*x);
            y = nums[n-1];
            for(i = n-1; i >= 1; i--){
                nums[i] = min(nums[i],nums[i-1]);
            }
            nums[0] = min(nums[0],y);
        }
        return ans;
    }
};