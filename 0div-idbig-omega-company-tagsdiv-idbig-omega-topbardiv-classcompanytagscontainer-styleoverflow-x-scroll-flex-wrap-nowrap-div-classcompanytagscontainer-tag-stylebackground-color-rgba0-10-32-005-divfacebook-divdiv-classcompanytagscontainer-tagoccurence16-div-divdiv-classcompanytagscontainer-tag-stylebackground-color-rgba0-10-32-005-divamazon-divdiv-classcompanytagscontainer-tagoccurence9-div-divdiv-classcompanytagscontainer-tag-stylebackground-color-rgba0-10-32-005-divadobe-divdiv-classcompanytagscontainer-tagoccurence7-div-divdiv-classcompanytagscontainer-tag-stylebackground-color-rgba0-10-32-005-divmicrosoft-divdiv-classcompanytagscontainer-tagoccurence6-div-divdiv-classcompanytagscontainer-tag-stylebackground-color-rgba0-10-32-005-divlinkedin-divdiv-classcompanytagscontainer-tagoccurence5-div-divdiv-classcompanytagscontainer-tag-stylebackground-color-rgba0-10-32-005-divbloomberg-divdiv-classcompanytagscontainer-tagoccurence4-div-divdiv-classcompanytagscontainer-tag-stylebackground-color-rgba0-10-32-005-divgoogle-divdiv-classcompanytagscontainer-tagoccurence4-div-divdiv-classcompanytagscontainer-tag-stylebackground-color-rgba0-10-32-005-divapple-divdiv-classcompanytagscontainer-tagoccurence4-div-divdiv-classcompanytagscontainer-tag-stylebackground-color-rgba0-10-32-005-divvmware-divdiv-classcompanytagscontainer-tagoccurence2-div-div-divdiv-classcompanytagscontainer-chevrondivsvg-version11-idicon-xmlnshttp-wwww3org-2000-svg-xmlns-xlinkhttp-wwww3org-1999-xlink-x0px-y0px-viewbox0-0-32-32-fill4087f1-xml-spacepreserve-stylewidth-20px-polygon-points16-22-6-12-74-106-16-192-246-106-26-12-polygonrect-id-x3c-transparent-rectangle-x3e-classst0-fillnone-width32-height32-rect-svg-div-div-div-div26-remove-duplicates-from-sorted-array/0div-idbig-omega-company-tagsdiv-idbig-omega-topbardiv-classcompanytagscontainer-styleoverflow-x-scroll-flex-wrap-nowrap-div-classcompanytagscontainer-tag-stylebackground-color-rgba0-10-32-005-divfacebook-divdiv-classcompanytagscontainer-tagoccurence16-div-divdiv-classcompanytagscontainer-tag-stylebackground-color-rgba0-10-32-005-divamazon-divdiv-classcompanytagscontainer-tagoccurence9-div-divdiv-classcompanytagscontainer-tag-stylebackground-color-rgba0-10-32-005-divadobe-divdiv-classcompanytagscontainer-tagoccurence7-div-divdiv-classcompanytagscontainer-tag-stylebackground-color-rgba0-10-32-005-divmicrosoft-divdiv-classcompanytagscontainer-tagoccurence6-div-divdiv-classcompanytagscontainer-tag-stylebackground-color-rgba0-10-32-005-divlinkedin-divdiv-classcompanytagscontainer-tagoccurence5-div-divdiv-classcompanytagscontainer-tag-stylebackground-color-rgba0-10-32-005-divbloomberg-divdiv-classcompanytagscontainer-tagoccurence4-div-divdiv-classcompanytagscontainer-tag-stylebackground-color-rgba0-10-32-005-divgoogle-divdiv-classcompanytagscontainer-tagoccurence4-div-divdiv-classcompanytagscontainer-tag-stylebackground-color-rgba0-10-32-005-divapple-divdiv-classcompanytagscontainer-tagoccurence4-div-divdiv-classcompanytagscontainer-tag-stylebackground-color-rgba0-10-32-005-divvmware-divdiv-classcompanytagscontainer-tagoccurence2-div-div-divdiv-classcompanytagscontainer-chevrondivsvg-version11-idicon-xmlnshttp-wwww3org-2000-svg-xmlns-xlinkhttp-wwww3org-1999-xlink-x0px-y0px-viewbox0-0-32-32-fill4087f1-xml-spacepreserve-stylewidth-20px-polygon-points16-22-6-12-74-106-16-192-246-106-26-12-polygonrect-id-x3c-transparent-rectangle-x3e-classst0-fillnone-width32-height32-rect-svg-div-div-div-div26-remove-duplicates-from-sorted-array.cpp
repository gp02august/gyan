class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        //int last = nums[nums.size()-1];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};