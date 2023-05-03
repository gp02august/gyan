class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        for(int i=0; i<nums1.size(); i++)
        {
            s1.insert(nums1[i]);
        }
        
        for(int i=0; i<nums2.size(); i++)
        {
            s2.insert(nums2[i]);
        }
        
        vector<vector<int>>ans(2);
        for(auto i : s1)
        {
            if(s2.count(i) ==0)
                ans[0].push_back(i);
        }
        
        for(auto i : s2)
        {
            if(s1.count(i)==0)
                ans[1].push_back(i);
        }
        
        return ans;
    }
};