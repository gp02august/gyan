class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n <= 0) {
        return false;  // Negative numbers and zero are not powers of two
    }
    return (n & (n - 1)) == 0;  
    }
};