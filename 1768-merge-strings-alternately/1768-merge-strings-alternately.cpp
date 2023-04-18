class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n= word1.length();
        int m = word2.length();
        
        string sum ="";
        
        int i=0; int j = 0;
        while(i<n || j<m)
        {
            if(i<n)
                sum +=word1[i];
            if(j<m)
                sum += word2[j];
            
            i++;
            j++;
        }
        return sum;
    }
};