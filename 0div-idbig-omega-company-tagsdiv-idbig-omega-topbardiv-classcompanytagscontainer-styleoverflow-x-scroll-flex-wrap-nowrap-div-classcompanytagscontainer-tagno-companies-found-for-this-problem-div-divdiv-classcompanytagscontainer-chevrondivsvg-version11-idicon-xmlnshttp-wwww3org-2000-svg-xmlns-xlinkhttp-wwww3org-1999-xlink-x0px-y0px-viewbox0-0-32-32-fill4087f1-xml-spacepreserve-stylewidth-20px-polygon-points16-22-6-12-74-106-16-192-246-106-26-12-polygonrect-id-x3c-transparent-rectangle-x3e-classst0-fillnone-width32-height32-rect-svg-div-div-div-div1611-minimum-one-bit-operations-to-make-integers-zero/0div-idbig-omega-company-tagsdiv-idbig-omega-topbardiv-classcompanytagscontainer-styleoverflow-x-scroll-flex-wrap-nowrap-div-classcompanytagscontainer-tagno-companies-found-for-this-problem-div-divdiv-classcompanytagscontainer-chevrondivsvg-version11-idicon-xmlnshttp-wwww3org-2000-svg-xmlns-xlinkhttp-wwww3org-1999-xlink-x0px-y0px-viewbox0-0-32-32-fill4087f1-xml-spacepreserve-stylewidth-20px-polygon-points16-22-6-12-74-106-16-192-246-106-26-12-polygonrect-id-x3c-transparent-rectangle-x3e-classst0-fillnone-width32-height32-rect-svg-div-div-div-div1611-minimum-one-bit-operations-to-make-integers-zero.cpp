class Solution {
public:
  /*  vector<int>solve(int &n)
    {
        vector<int>ans;
        int i=0, k=0;
        while(n>0)
        {
            int bit = n&1;
            k +=bit*pow(10, i);
            ans.push_back(k);
           
            n>>=1;
            i++;
        }
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i];
            //cout<<endl;
        }
        return ans;
    } */
    int minimumOneBitOperations(int n) {
        int res;
        for (res = 0; n > 0; n &= n - 1)
        res = -(res + (n ^ (n - 1)));
        return abs(res);
    }
};