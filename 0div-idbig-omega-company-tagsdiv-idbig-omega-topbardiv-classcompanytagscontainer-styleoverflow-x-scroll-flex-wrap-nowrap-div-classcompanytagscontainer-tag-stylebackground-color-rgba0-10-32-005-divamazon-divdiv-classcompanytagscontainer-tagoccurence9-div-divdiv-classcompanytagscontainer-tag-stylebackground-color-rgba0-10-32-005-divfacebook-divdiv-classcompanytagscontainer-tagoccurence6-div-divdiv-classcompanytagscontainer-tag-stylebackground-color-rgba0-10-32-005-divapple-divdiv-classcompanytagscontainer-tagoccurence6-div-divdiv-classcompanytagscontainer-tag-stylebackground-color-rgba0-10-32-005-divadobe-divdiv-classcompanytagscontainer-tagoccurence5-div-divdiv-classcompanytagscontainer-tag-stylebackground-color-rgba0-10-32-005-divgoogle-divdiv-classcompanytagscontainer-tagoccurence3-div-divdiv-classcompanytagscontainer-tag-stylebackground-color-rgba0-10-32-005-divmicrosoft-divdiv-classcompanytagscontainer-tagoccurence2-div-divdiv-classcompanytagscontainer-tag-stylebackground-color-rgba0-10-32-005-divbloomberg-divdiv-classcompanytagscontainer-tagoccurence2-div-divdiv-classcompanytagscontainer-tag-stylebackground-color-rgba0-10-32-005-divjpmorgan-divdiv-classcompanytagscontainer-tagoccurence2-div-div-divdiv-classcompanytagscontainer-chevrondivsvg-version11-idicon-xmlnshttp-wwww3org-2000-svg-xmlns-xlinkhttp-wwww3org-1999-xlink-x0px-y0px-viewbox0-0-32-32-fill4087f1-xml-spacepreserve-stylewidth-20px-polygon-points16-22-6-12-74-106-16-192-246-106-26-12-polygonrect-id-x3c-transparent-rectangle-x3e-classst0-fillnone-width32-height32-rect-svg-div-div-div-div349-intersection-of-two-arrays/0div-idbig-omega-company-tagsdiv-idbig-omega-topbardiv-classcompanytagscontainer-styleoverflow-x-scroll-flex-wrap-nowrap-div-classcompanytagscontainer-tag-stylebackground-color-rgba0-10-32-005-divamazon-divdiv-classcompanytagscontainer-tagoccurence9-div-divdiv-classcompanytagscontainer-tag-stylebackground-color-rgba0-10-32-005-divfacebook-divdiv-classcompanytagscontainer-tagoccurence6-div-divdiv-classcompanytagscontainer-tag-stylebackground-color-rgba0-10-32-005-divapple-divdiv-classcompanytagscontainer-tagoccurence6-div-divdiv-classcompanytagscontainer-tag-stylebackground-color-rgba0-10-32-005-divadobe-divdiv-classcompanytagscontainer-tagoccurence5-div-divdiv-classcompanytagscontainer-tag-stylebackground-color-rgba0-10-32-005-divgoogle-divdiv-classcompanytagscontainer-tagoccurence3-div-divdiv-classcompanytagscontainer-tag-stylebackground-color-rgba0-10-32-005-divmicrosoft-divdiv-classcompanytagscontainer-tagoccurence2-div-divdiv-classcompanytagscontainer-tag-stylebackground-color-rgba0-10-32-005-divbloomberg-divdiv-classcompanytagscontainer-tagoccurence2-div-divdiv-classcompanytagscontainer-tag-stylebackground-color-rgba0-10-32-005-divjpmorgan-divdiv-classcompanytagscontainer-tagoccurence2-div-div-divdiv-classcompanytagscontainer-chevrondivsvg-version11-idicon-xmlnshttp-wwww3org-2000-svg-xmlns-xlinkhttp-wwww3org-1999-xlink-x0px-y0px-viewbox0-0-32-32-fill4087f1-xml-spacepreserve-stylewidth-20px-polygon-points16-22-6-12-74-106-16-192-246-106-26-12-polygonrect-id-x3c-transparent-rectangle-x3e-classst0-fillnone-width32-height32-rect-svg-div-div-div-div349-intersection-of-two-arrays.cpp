class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        vector<int>res;
        for(auto i:nums2)
        {
            s.insert(i);
        }
        for(int i=0; i<nums1.size(); i++)
        {
            if(s.find(nums1[i]) != s.end())
            {
                res.push_back(nums1[i]);
                s.erase(nums1[i]);
            }
        }
        return res;
    }
};