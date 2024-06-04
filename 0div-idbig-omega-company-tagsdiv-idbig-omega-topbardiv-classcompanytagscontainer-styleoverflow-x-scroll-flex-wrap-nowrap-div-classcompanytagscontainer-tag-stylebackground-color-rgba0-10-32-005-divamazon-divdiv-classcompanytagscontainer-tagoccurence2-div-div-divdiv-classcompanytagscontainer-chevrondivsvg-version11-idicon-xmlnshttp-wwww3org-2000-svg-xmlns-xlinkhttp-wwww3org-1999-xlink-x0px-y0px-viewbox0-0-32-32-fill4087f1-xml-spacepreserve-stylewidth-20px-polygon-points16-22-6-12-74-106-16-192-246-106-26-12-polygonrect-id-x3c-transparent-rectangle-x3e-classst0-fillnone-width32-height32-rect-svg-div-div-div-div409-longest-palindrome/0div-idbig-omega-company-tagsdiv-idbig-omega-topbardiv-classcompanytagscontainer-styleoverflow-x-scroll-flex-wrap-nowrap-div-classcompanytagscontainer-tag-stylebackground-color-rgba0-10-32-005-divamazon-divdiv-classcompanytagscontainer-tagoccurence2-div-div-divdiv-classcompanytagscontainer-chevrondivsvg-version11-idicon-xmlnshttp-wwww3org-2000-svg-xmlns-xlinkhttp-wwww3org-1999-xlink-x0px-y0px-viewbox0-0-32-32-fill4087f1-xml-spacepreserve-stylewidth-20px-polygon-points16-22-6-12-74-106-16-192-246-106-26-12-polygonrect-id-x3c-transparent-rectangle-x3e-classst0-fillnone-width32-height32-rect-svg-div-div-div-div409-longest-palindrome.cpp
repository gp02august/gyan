class Solution {
public:
    int longestPalindrome(string s) {
        
        int oddCnt=0;
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
            if(mp[i]%2==1)
                oddCnt++;
            else
                oddCnt--;
        }
        
        if(oddCnt>1)
            return s.length()-oddCnt+1;
        
        return s.length();
        
    }
};