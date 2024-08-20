class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int first_halfsum=0, second_halfsum=0;
        for(int i=0; i<n/2; i++){
            first_halfsum +=piles[i];
        }
        for(int i=n/2; i<n; i++){
            second_halfsum +=piles[i];
        }
        return second_halfsum>first_halfsum;
    }
};