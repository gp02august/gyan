class Solution {
public:
    string reverseWords(string s) {
        vector<string>st;
        int i=0;
        while(i<s.length())
        {
            string word = "";
            while(i<s.length() && s[i] !=' ')
            {
                word +=s[i];
                i++;
            }
            if(word.size()!=0)
            {
                st.push_back(word);
                
            }
            i++;
        }
        string res ="";
        int j=st.size()-1;
        while(j>=0)
        {
            res +=st[j];
            if(j>0)
            {
                res +=" ";
            }
            j--;
        }
        return res;
    }
};