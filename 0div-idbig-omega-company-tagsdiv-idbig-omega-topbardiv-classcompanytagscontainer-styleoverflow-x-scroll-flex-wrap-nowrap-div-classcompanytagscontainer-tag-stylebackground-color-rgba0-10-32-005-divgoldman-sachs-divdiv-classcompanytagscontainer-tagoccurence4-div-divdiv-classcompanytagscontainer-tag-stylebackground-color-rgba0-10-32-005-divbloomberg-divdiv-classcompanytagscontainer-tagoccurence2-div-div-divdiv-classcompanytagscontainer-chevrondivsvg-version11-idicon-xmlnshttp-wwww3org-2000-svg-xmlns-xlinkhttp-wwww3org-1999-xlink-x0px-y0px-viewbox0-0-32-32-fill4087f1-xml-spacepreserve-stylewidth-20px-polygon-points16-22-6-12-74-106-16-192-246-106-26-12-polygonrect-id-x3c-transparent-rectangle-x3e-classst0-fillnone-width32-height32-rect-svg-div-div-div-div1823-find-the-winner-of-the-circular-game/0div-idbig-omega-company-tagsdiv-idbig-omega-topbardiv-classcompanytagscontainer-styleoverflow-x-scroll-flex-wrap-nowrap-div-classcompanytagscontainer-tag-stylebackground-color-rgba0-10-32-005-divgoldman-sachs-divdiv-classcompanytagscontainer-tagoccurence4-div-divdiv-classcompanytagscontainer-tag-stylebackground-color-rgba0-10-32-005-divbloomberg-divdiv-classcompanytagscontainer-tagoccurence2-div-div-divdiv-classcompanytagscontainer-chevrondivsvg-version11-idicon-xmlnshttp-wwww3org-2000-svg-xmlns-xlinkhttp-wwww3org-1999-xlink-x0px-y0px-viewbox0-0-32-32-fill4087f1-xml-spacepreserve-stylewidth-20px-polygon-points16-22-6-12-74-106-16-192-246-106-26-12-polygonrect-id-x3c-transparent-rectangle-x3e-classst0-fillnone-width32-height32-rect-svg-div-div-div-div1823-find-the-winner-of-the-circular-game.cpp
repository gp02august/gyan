class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int>v;
        for(int i=1; i<=n; i++){
            v.push_back(i);
        }
        int i=0; // from here to start the game.....
        while(v.size()>1){
            int indx_to_del = (i+k-1)%v.size();
            
            v.erase(v.begin()+indx_to_del);
            
            i=indx_to_del;
        }
        return v[0];
    }
};