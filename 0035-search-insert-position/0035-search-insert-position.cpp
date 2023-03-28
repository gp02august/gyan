class Solution {
public:
    int binarySearch (vector<int>& nums, int start, int end, int target)
    {
        int mid = start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]<target)
                start=mid+1;
            
            else if(nums[mid]>=target)
                end = mid-1;
             mid = start+(end-start)/2;
        }
        return start;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};