class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
//           const int MOD = 1e9 + 7;

//         // The initial length of the string
//         long long length = s.size();

//         // Process each transformation
//         long long z_cnt =0;
//         for(char c:s){
//             if(c=='z'){
//                 z_cnt++;
//             }
//         }
//         for(int i=0; i<t; i++){
//             length = (length+z_cnt)%MOD;
//             z_cnt = (z_cnt*2)%MOD;
//         }

//         return length;
        
         const int M = 1e9 + 7; // Define modulo constant
        vector<long long> cnt(26, 0); // Vector to count occurrences of each character
        
        // Count the occurrences of each character in the string
        for (char ch : s) {
            cnt[ch - 'a']++;
        }
        
        // Perform the transformations for t iterations
        for (int i = 0; i < t; ++i) {
            vector<long long> cnt_next(26, 0); // Vector for next transformations
            
            for (int c = 0; c < 26; ++c) {
                if (c != 25) {
                    cnt_next[c + 1] = (cnt_next[c + 1] + cnt[c]) % M;
                } else {
                    cnt_next[0] = (cnt_next[0] + cnt[c]) % M;
                    cnt_next[1] = (cnt_next[1] + cnt[c]) % M;
                }
            }
            cnt = cnt_next; // Update count for the next iteration
        }
        
        // Calculate the total length after transformations
        long long result = 0;
        for (long long count : cnt) {
            result = (result + count) % M;
        }
        
        return result;
    }
};