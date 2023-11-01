class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sell = 0;
        for(int i=1; i<prices.size(); i++)
        {
            sell += max(0, prices[i]-prices[i-1]);
           // buy = min(buy, prices[i]);
        }
        return sell;
    }
};