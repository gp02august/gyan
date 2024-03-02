class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        for(int i=0; i<nums.size(); i++)
        {
            int ans =nums[i];
            nums[i]=ans*ans;
            
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};