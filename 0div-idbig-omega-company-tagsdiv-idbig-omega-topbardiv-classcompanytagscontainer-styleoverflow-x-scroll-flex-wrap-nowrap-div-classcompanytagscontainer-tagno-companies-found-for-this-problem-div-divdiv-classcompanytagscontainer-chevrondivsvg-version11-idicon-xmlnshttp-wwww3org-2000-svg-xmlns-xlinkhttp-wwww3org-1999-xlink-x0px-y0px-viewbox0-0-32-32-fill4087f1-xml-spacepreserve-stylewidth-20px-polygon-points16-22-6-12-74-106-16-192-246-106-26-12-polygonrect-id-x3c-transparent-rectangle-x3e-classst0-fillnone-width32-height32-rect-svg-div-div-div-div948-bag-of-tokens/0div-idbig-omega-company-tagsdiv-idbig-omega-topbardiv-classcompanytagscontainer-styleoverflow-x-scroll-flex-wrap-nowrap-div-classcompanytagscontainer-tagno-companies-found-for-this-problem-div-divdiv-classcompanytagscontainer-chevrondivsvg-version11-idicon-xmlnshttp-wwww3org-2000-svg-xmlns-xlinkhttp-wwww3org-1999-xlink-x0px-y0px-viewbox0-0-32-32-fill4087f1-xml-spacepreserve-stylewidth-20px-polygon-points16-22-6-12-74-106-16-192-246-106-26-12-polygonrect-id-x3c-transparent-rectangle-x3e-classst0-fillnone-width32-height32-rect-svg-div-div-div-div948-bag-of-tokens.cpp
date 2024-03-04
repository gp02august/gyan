class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        
        int result = 0;
        int score = 0;
        int i=0; int j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power -=tokens[i];
                score++;
                i++;
                
                result=max(result, score);
            }
            else if(score >= 1)
            {
                power +=tokens[j];
                score--;
                j--;
                
            }
            else
            {
                return result;
            }
        }
        return result;
    }
};