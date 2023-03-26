class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int>ans;
        int sum =0;
        int maxi=INT_MIN;
        while(numOnes !=0)
        {
            ans.push_back(1);
            numOnes--;
        }
        while(numZeros != 0)
        {
            ans.push_back(0);
            numZeros--;
        }
        while(numNegOnes !=0)
        {
            ans.push_back(-1);
            numNegOnes--;
        }
           for(int i=0; i<ans.size(); i++)
           {
               if(k>0)
               {
                   sum +=ans[i];
               }
               k--;
           }
            return sum;
    }
};