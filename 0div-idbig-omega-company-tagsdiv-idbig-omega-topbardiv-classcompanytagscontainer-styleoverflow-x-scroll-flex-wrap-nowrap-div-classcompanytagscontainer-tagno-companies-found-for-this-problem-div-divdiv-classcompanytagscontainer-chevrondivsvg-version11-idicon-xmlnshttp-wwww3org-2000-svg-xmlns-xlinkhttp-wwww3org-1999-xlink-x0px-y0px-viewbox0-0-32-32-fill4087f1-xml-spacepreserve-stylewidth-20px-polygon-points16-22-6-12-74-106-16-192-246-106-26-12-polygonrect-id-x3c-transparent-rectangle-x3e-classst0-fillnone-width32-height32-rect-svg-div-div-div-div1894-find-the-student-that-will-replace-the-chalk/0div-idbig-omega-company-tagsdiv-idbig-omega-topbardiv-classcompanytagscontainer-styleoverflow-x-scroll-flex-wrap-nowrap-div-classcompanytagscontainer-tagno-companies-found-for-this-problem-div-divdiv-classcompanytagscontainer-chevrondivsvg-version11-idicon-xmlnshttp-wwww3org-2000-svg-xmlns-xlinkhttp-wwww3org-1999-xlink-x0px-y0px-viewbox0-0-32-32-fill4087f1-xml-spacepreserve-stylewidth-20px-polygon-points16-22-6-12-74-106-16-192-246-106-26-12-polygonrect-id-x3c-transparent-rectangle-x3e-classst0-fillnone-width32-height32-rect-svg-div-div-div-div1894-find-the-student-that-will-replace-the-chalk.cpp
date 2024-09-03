class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
//         int i = 0;
//         while (true) {
//             // If k is less than the chalk required by the current student, return the index
//             if (k < chalk[i]) {
//                 return i;
//             }

//             // Subtract the chalk used by the current student
//             k -= chalk[i];

//             // Move to the next student (circularly)
//             i = (i + 1) % n;
//         }

//         // Return 0 (This line will never be reached but is here for completeness)
//         return 0;   this approach give tle now optimized approach by finding all sum of chalk needed to be used by students....
        long long need =0;
        for(int i=0; i<n; i++){
            need +=chalk[i];
        }
        k = k%need;
        for(int i=0; i<n; i++){
            if(k<chalk[i])
                return i;
            
            k -=chalk[i];
        }
        return 0;
    }
};