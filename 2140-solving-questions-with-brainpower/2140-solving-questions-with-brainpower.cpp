class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int m= questions.size();
        vector<long long>ans(m+1);
        for(int i=m-1; i>=0; i--)
        {
            int temp=questions[i][1]+i+1;
            if(temp>m-1)
            {
                ans[i]=questions[i][0];
            }
            else
            {
                ans[i]=questions[i][0]+ans[temp];
            }
            ans[i]=max(ans[i], ans[i+1]);
        }
        return ans[0];
    }
};