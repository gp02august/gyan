class Solution {
public:
    int findMin(vector<int>& nums) {
        
    if(nums[0]<nums[nums.size()-1])
        return nums[0];
        
    int start=0;
    int end=nums.size()-1;
    int ans=0;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]>=nums[0])
        {
            start=mid+1;
            ans=start;
        }
        else
        {
            end=mid;
            ans=end;
        }
    }
    return  nums[ans];


    }
};