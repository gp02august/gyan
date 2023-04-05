class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
//initializing cur and ans for storing prefix sum and res respectively
        long long ans=0,cur=0;
        for(int i=0;i<nums.size();i++){
            cur+=nums[i];
            long long val=ceil((cur)/(i+1.0));
			//storing max in the ans
            ans=max(ans,val);
            
        }
		//returning the ans
        return ans;
    }
};