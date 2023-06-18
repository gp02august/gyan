class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int x=(mainTank-1)/4;
        if(additionalTank>=x)
            mainTank+=x;
        else 
            mainTank+=additionalTank;
        return 10*mainTank;
    }
};