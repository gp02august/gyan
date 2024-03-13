class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        int  res = sqrt(sum);
        
        if(sum == res*res)
            return res;
        
        return -1;
    }
};