class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        int t=0, f=0;
        while(right<n)
        {
            t +=(answerKey[right] == 'T');
            f +=(answerKey[right] == 'F');
            
            while (t > k && f > k) {
                // If both counters exceed 'k', move the start pointer and adjust counters
                if (answerKey[left] == 'T')
                    t--;
                else
                    f--;
                left++;
            }

            ans = max(ans, right - left + 1); // Update the maximum consecutive answers
            right++; 
        }
        return ans;
    }
};