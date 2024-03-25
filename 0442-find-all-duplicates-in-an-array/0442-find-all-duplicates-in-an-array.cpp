class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        for(auto i: mp)
        {
            if(i.second >=2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;   
        
        /*here we use extra space i.e O(k) where k is the no. of dublicate elements
        and second approach is  using  two pointers in below code;  */
        
    }
};