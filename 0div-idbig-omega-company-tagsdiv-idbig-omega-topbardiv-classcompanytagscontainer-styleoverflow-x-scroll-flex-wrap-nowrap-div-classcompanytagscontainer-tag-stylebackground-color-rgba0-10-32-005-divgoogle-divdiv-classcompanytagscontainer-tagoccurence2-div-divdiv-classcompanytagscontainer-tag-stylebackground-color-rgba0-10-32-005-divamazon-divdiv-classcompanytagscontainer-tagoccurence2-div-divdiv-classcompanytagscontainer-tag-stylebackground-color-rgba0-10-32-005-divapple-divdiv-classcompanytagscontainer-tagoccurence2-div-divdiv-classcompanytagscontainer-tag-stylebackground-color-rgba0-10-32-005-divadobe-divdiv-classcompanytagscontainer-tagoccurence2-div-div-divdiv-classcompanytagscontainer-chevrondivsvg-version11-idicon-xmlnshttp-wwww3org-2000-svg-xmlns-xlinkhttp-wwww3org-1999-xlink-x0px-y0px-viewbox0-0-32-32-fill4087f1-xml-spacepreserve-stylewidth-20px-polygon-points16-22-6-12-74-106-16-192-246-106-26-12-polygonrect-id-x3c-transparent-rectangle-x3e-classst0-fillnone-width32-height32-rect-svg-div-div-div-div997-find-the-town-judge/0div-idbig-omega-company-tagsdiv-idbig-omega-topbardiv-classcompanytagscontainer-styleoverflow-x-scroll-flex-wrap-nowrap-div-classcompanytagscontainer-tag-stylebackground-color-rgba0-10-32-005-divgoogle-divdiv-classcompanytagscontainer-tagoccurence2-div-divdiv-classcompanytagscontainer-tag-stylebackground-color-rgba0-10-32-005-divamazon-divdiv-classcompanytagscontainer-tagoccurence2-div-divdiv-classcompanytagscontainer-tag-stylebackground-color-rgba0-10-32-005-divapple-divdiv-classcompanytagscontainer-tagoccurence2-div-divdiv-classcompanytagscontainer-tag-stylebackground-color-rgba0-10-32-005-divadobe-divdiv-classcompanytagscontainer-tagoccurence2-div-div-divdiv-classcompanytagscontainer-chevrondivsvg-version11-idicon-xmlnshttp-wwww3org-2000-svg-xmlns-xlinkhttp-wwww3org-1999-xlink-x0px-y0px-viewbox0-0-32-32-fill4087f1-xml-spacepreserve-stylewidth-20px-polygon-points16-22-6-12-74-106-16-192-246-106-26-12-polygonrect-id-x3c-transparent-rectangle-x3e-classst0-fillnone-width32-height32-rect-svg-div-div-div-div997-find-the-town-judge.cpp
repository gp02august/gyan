class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1), outdegree(n+1);
        for(auto &i:trust)
        {
            ++indegree[i[0]];
            ++outdegree[i[1]];
        }
        for(int i=1; i<=n; i++)
        {
            if(outdegree[i]==n-1 && indegree[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};