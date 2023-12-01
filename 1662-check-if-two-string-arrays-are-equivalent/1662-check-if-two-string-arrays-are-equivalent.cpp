class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string st, s;
        for(int i=0; i<word1.size(); i++)
        {
            st +=word1[i];
        }
        for(int i=0; i<word2.size(); i++)
        {
            s +=word2[i];
        }
        int i=0; int j=0;
        while(i<st.length() && j<s.length()) 
        {
             if(st.length() != s.length())
                return false;
            
            if(st[i]==s[j])
            {
                i++;
                j++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};