class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        int n = nums.size();
        for(auto i:nums)
        {
            s.insert(i);
        }
        for(int i=1; i<=n+1; i++)
        {
            if(s.find(i) == s.end())
                return i;
        }
        return 1;
    }
};