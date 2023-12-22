class Solution {
public:
    int t[1001][1001];
    int solve(string& text1, string& text2, int n, int m)
    {
        if(n == 0 || m == 0)
        {
            return 0;
        }
        
        if(t[n][m] != -1)
            return t[n][m];
        
        if(text1[n-1] == text2[m-1])
        {
            return t[n][m]= 1+solve(text1, text2, n-1, m-1);
        }
        return t[n][m]=max(solve(text1, text2, n, m-1), solve(text1, text2, n-1, m));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        
        memset(t, -1, sizeof(t));
        
        return t[n][m]= solve(text1, text2, n, m);
    }
};