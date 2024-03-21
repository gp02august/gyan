class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int k=0;
        for(auto i:nums)
        {
            if(mp[i]<2)
            {
               nums[k]=i;
                k++;
               mp[i]++;
            }
        }
        return k;
    }
};