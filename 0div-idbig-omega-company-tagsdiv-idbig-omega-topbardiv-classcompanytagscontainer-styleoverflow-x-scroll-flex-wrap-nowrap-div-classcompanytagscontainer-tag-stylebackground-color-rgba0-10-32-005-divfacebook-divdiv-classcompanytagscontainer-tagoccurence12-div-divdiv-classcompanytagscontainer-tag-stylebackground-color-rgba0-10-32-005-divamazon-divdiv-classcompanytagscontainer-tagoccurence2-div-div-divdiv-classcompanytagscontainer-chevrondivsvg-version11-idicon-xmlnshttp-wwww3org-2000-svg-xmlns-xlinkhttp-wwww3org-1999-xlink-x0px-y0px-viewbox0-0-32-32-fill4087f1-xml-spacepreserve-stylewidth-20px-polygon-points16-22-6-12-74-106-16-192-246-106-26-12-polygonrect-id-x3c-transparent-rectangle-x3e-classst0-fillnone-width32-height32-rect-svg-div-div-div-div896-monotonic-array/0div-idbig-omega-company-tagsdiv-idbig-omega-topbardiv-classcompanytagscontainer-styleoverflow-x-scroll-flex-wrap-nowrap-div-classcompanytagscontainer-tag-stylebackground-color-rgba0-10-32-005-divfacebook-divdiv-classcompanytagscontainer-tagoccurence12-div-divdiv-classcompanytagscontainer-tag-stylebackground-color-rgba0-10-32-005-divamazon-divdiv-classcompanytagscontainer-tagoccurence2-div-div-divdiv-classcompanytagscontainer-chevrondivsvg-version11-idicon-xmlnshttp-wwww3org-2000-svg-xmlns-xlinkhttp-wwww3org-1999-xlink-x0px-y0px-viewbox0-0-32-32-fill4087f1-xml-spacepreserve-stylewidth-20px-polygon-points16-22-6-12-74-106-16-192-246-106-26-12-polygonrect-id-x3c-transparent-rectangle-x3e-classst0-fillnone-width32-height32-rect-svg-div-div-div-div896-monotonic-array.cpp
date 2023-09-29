class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int incflag=1;
        int decflag=1;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>nums[i+1])
                incflag=0;
            if(nums[i]<nums[i+1])
                decflag=0;
        }
        if(incflag ==0 && decflag==0)
            return false;
        
        return true;
    }
};