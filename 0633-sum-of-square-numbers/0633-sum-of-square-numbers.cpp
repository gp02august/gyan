class Solution {
public:

    int square_root(int n)
    {
        if (n == 1 || n == 0)
            return n;
        int start = 0;
        int end = n;
        while (start <= end)
        {
            long int mid = start + (end - start) / 2;
            if (mid * mid == n)
                return mid;
            else if (mid * mid < n)
                start = mid + 1;
            else if (mid * mid > n)
                end = mid - 1;
        }
        return end;
    }

    bool judgeSquareSum(int n) {
    long int start = 0;
    long int end = square_root(n);
    while (start <= end)
    {
        long int sum = start * start + end * end;
        if (sum == n)
            return true;
        else if (sum > n)
            end--;
        else if (sum < n)
            start++;
    }
    return false;

        
    }
};