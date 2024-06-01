class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        int i=0; int j=1;
        while(i<s.length()-1 && j<s.length()){
            int a = int(s[i]), b=int(s[j]);
            res +=abs(a-b);
            i++; j++;
        }
        return res;
    }
};