class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0); // Initialize the result vector with zeros
    
    for (int i = 0; i <= n; i++) {
        int num = i;
        int count = 0;
        
        while (num > 0) {
            count += num & 1; // Count the rightmost bit
            num >>= 1;       // Right shift to check the next bit
        }
        
        ans[i] = count; // Store the count in the result vector
    }
    
    return ans;
    }
};