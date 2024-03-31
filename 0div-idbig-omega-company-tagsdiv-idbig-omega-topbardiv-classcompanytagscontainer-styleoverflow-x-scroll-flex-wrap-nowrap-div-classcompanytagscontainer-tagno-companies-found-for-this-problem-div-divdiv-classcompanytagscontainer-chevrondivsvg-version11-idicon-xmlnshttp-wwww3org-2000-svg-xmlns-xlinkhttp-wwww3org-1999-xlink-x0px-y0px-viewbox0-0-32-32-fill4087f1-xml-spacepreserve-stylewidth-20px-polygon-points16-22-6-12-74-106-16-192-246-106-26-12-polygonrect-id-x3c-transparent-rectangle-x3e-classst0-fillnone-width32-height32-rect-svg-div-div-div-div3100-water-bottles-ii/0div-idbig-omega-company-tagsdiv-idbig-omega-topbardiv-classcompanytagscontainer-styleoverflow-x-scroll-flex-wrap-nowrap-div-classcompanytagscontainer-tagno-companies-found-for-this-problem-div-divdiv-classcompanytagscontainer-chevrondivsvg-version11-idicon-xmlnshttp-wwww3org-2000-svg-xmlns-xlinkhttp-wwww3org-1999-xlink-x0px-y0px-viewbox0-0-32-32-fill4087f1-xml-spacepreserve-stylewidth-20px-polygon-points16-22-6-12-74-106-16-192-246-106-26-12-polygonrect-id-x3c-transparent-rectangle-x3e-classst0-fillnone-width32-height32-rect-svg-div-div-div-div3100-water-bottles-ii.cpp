class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int k=numBottles;
        int l=numBottles;
        numBottles=0;
        while(k>=numExchange){
            k -=numExchange;
            numExchange++;
            k++;
            l++;
        }
        return l;
    }
};