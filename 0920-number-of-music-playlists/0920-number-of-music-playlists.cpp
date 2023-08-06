class Solution {
public:
    int N, Goal, K;
    const long mod = 1e9+7;
    long t[101][101];
    
    long solve(int cnt_song, int cnt_unique)
    {
        if(cnt_song == Goal)
        {
            if(cnt_unique == N)
            {
                return t[cnt_song][cnt_unique] = 1;
            }
            
            return 0;
        }
        if(t[cnt_song][cnt_unique] != -1)
        {
            return t[cnt_song][cnt_unique];
        }
        
        long res=0;
        if(cnt_unique<N)
            res +=(N-cnt_unique)*solve(cnt_song+1, cnt_unique+1);
        
        if(cnt_unique>K)
            res +=(cnt_unique-K)*solve(cnt_song+1, cnt_unique);
        
        return t[cnt_song][cnt_unique] = res % mod;
    }
    
    int numMusicPlaylists(int n, int goal, int k) {
        N=n; 
        Goal=goal;
        K=k;
        memset(t,-1,sizeof(t));
        return solve(0,0);
    }
};