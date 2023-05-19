class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int ans[graph.size()];
        memset(ans,-1,sizeof(ans));
        
        for(int i=0; i<graph.size(); i++)
        {
            if(ans[i]== -1)
            {
                ans[i]=0;
                queue<int>q;
                q.push(i);
                while(!q.empty())
                {
                    int res=q.front();
                    q.pop();
                    for(auto it : graph[res])
                    {
                        if(ans[it]== -1)
                        {
                            ans[it] = !ans[res];
                            q.push(it);
                        }
                        else if(ans[it]==ans[res])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};