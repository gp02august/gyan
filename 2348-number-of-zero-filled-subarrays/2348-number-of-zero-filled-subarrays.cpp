class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0, count=0;
        for(auto n : nums)
        {
            if(n==0){
                count++;
                
            }
            else{
                ans =ans+(count*(count+1))/2;
                count=0;
            }
        }
        /* checking for last index contins zero */
        if(count>0)
            ans = ans+(count*(count+1)/2);
        return ans;
    }
};