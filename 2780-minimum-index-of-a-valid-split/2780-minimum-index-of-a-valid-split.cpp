class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
    int dominant = nums[0];
    int dominantFreq = 1;

    for (int i = 1; i < n; i++) 
    {
        if (nums[i] == dominant) 
        {
            dominantFreq++;
        }
        else 
        {
            dominantFreq--;
            if (dominantFreq == 0)
            {
                dominant = nums[i];
                dominantFreq = 1;
            }
        }
    }

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == dominant)
            {
                cnt++;
            }
        }

    dominantFreq = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == dominant) {
            dominantFreq++;
        }

        if ((dominantFreq*2 > i+1) && (cnt-dominantFreq)*2 > n-i-1) 
        {
            return i;
        }
    }

    return -1;


    }
};