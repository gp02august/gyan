class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        vector<int>res;
        
        int i=0;
        while(i<n)
        {
            if(nums[i]>0)
            {
                v1.push_back(nums[i]);
                i++;
            }
            else
            {
                v2.push_back(nums[i]);
                i++;
            }
        }
        
        int j=0, k=0;
        while(j<v1.size() && k<v2.size())
        {
            res.push_back(v1[j]);
            res.push_back(v2[k]);
            j++;
            k++;
        }
        while(j<v1.size())  // when positive integers remain then we do
        {
            res.push_back(v1[j]);
            j++;
        }
        while(k<v2.size())  // similarly when negative elements remain then we do
        {
            res.push_back(v2[k]);
            k++;
        }
        return res;
    }
};