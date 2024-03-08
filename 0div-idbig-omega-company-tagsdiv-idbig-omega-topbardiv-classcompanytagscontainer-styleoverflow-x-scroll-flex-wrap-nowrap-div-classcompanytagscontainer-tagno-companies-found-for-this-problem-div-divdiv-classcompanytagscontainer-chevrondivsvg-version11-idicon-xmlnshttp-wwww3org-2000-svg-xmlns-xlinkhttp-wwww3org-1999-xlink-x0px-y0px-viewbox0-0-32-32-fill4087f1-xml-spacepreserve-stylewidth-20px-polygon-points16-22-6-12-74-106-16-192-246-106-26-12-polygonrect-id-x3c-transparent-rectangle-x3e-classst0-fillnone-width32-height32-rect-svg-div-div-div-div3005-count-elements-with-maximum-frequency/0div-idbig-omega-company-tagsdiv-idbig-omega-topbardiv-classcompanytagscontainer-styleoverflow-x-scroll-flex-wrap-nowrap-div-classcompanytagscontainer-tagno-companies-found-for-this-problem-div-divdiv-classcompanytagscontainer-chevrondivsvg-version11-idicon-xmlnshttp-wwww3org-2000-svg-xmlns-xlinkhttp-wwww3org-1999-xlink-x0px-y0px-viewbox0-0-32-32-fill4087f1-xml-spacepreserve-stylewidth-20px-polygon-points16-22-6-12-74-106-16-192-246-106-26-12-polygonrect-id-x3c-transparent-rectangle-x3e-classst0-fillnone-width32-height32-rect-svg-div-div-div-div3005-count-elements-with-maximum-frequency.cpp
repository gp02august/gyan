class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int maxi_freq = 0;
        int maxi=0;
        for(auto i:mp)
        {
            maxi=max(maxi, i.second);
        }
        for(auto i:mp)
        {
            if(i.second == maxi)
            {
                maxi_freq +=maxi;
            }
        }
        return maxi_freq;
    }
};