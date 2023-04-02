class Solution {
public:
    int binary_search(int spell, vector<int> &potions, long long success)
    {
        int start =0;
        int end = potions.size()-1;
        
        while(start<=end)
        {
            int mid = (start+(end-start)/2);
            if((long long)spell*potions[mid]>=success)
            {
                end =mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return end+1;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
            sort(potions.begin(), potions.end());
        int m=potions.size();
        vector<int>ans;
        
        for(auto spell : spells)
        {
            int index = binary_search(spell, potions, success);
                ans.push_back(m-index);
        }
        return ans;
    }
};