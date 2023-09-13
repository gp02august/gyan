class Solution {
public:
    int Mod = 1e9+7;
    int countOrders(int n) {
        if(n==1)
            return 1;
        
        long long result =1;   // storing prev ans i.e. n=1, 2, 3....n-1;
        for(int i=2; i<=n; i++)
        {
            int space = (i-1)*2+1;
            int curr_pos = space*(space+1)/2;
            
            result *= curr_pos;
            
            result %= Mod;
        }
        return result;
    }
};