class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    int n = s.length();
    
    for (int len = 1; len <= n / 2; ++len) {
        if (n % len == 0) {
            string pattern = s.substr(0, len);
            string constructed = "";

            for (int i = 0; i < n / len; ++i) {
                constructed += pattern;
            }

            if (constructed == s) {
                return true;
            }
        }
    }

    return false;
    }
};