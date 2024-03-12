class Solution {
public:
    string customSortString(string order, string s) {
        string st;
        int n = order.length();
        int m = s.length();
        int i = 0;
        int j = 0;
        

        // Count the occurrences of each character in s
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        while (i < n) {
            char currentChar = order[i];

            // Append the characters in order that are present in s
            if (charCount.find(currentChar) != charCount.end() && charCount[currentChar] > 0) {
                st += currentChar;
                charCount[currentChar]--;
                
            } else {
                i++;
            }
        }

        // Append the remaining characters of s
        for (auto it : charCount) {
            st += string(it.second, it.first);
        }

        return st;
    }
};