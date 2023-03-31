class Solution {
public:
  long long int mySqrt(long long int x) {
        
        long long int low = 0, high = x;

        int ans;
        while(low<=high){
            if(x==0) ans = 0;

            long long int mid = low + (high-low)/2;
            long long int sq = mid*mid;

            if(sq==x) return mid;

            else if(sq>x) high = mid-1;

            else {
                low = mid+1;
                ans = mid;
            }


        }
        return ans;
    }
};