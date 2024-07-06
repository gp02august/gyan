class Solution {
public:
    int passThePillow(int n, int time) {
        
        int completed_cyc = (time) / (n-1);
        int remain_cyc = (time) % (n-1);
        
        int ans = 0;
        if(completed_cyc % 2 != 0){
            ans = n-remain_cyc;
        }
        else{
            ans = remain_cyc+1;
        }
        
        return ans;
    }
};