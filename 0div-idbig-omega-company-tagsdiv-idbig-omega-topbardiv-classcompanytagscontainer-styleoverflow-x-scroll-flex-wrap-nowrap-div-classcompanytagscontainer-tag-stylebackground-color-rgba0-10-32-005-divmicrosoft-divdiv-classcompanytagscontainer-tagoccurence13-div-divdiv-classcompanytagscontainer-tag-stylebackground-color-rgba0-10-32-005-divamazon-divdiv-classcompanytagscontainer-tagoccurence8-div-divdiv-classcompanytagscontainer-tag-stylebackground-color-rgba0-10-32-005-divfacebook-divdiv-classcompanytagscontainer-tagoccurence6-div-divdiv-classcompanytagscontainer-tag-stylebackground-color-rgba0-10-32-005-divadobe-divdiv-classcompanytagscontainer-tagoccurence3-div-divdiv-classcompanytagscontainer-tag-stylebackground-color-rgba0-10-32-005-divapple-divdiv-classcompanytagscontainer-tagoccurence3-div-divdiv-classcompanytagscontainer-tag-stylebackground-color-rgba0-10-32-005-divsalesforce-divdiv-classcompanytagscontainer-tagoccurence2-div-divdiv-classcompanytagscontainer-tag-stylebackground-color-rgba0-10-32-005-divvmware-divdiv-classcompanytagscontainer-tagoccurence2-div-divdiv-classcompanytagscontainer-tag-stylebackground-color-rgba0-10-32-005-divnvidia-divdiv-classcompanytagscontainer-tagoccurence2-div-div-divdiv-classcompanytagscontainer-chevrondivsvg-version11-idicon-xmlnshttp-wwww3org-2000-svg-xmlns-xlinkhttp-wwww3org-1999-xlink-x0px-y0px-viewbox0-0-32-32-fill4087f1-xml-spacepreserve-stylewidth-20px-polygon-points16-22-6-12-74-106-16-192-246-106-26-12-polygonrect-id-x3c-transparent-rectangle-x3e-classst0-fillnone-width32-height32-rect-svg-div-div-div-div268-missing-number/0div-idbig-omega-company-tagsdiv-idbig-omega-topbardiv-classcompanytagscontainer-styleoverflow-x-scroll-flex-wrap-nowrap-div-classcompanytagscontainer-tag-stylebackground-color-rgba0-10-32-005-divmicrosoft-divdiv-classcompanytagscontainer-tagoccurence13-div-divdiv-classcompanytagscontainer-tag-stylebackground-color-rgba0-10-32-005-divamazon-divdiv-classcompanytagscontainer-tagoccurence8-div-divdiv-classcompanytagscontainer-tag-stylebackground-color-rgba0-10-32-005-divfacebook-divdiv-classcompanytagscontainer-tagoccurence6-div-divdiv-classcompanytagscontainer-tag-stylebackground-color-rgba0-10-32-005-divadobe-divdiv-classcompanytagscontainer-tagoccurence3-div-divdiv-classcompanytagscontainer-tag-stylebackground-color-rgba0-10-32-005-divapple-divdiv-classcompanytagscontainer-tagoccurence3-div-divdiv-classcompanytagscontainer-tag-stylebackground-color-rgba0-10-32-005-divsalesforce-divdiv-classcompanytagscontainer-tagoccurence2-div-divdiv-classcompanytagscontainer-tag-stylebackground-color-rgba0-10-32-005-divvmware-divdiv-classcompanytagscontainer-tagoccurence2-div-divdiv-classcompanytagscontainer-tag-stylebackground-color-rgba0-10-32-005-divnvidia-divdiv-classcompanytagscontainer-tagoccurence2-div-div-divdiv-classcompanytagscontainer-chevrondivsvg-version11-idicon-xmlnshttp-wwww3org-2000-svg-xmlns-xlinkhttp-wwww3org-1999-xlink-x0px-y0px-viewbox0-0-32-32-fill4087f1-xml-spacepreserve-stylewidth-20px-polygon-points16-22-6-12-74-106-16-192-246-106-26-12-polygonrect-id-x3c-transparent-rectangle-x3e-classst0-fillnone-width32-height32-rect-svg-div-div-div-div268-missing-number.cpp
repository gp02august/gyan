class Solution {
public:
    int missingNumber(vector<int>& nums) {
       /* sort(nums.begin(), nums.end());
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
        return 0;*/
        
        // now second approach
        int n=nums.size();
        int ans=0;
        for(int i=0; i<=n; i++)
        {
            ans ^=i;
        }
        for(auto j:nums)
        {
            ans ^=j;
        }
        return ans;
    }
};