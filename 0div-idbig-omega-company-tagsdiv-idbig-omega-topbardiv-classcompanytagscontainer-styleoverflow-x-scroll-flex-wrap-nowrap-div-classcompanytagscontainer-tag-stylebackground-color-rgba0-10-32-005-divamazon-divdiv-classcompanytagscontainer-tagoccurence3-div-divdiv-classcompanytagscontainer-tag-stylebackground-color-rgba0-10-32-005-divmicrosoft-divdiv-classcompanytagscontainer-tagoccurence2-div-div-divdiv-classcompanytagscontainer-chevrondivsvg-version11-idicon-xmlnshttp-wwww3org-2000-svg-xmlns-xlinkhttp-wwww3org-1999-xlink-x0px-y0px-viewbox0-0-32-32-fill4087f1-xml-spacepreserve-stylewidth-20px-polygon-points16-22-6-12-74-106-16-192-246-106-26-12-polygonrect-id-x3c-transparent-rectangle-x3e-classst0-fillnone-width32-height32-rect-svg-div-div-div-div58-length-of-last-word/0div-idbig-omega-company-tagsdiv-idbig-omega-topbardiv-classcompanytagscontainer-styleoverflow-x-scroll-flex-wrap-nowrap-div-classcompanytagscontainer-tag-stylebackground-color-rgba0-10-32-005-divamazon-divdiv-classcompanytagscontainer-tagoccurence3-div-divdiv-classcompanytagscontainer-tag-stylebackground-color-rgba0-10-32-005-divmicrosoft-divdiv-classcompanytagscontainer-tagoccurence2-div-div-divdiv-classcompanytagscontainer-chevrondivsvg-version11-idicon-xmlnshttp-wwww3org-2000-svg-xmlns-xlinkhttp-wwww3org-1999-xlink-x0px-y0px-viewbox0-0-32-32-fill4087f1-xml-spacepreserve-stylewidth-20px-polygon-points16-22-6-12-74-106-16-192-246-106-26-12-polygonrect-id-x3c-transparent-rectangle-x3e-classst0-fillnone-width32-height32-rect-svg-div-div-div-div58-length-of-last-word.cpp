class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int cnt =0;
        int i=n-1;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        while(i>=0 && s[i] != ' '){
            cnt++; i--;
        }
        return cnt;
    }
};