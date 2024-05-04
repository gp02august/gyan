class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int i = 0;
        while (i < n && word[i] != ch) {
            i++;
        }
        if (i < n) {
            int j = 0;
            while (j < i) {
                swap(word[j], word[i]);
                j++;
                i--;
            }
        }
        return word;
    }
};