class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int>s;
        for(auto i:nums)
        {
            s.insert(i);
            i++;
        }
        
        for(int i=0; i<=nums.size(); i++)
        {
            if(s.find(i)==s.end())
                return i;
        }
        return 0;
    }
};