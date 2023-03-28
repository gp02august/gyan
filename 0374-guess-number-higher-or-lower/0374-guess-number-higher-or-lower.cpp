/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1;
        int end=n;
        int mid = start+(end-start)/2;
        int num ;
        while(start<=end)
        {
           num = guess (mid);
            if(num==0)
            {
                num =mid;
                break;
            }
             else if(num == -1)
                end = mid-1;
            
            else if(num == 1)
                start=mid+1;
            
             mid = start+(end-start)/2;
        }
        return num;
    }
};