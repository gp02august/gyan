class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==4)
            return true;
        int start =0;
        int end=num;
        long  int mid = start+(end-start)/2;
        while(start<=end)
        {
            if(mid*mid == num)
            {
                return true;
            }
            else if(mid*mid<num)
                start = mid+1;
            else if(mid*mid>num)
                end=mid-1;
            mid = start+(end-start)/2;
        }
        return false; 
    }
};