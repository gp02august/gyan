class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        
        vector<int>res(k,0);
        int i = 0;
        while(i>=0)
        {
            res[i]++;
            if(res[i]>n)
                --i;
            
            else if(i==k-1)
                ans.push_back(res);
            
            else
            {
                i++;
             res[i]=res[i-1];
            }
        }
        return ans;
    }
};