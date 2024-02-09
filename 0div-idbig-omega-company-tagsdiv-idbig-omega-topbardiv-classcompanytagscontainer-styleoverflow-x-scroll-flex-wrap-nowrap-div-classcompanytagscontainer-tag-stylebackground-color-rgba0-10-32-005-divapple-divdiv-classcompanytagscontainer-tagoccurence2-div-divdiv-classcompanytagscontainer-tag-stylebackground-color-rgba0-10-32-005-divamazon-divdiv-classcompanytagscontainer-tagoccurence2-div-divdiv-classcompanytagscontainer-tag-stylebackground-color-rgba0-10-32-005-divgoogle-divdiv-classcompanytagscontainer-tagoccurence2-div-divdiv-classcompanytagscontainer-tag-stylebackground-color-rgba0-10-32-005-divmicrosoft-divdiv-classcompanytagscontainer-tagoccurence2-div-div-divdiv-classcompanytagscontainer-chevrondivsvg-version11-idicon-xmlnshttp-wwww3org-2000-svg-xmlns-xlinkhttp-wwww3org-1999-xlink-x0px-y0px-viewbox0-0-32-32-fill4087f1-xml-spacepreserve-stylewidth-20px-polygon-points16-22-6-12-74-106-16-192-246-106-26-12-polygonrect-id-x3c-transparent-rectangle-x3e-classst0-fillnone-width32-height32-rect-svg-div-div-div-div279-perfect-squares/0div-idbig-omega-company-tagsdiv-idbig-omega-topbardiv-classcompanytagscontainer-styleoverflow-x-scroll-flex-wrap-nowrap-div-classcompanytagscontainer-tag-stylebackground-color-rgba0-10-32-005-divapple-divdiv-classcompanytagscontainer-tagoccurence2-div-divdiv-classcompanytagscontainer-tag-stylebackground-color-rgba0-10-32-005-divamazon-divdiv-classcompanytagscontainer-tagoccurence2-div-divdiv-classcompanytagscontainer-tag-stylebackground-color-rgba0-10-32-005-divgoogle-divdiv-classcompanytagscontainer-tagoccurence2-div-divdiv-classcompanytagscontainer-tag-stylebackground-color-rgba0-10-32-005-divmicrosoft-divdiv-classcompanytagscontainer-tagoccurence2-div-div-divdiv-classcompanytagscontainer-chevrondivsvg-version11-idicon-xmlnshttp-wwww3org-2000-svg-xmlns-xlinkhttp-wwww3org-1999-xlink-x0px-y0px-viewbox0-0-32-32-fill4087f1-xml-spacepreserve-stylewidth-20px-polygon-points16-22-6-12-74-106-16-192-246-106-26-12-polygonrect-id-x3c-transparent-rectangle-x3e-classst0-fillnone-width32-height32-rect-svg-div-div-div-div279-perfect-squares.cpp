class Solution {
public:
    int t[10001];
    int solve(int n)
    {
        int minCnt=INT_MAX;
        if(n==0)
            return 0;
        if(t[n-1]!=-1)
            return t[n-1];
        
        for(int i=1; i*i<=n; i++)
        {
            int ans=1+solve(n-i*i);
            minCnt=min(minCnt, ans);
        }
        return t[n-1]= minCnt;
    }
    int numSquares(int n) {
        memset(t,-1,sizeof(t));
        return t[n-1]=solve(n);
    }
};