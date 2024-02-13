class Solution {
public:
    bool solve(string &st)
    {
        //if(st.length()==0)
           // return "";
        
        int i=0, j=st.length()-1;
        while(i<j)
        {
            if(st[i]!=st[j])
            {
                return false;
            }
            else
            {
                i++; j--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string &word: words)
        {
            if(solve(word))
                return word;
        }
        return "";
    }
};