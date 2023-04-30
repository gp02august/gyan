class Solution {
public:
    struct dsu
    {
        vector<int>par, cou;
        dsu(int n)
        {
            par = vector<int>(n);
            cou = vector<int>(n,1);
            for(int i=0; i<n; i++)
                par[i] = i;
        }
        
        int find(int x)
        {
            return (par[x] == x)? x : par[x] = find(par[x]);
        }
        
        bool join(int x, int y)
        {
            int a = find(x);
            int b = find(y);
            
            if(a==b)
                return false;
            
            if(cou[a] < cou[b])
                swap(a,b);
            
            par[b] = a;
            
            cou[a] += cou[b];
            return true;
        }
        
        int count(int x)
        {
            return cou[find(x)];
        }
    };
    
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        vector<pair<int, int>>alice;
        vector<pair<int, int>>bob;
        vector<pair<int, int>>both;
        
        for(int i=0; i<(int)edges.size(); i++)
        {
            if(edges[i][0] == 1)
                alice.push_back({edges[i][1]-1, edges[i][2]-1});
            
            if(edges[i][0] == 2)
                bob.push_back({edges[i][1]-1, edges[i][2]-1});
            
            if(edges[i][0] == 3)
                both.push_back({edges[i][1]-1, edges[i][2]-1});
        }
        
        dsu a(n), b(n);
        int ans = 0;
        
        for(auto p: both)
        {
            ans +=a.join(p.first, p.second);
            b.join(p.first, p.second);
        }
        
        for(auto p : alice)
        {
            ans += a.join(p.first, p.second);
        }
        
        for(auto p: bob)
        {
            ans +=b.join(p.first, p.second);
        }
        
        if(a.count(a.find(0)) < n || b.count(b.find(0)) < n)
            return -1;
        
        return (int)edges.size()-ans;
    }
};