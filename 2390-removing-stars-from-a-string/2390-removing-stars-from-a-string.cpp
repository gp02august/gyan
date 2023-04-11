class Solution {
public:
    string removeStars(string s) {
        string k = "";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '*')
            {
                k.pop_back();
            }
            else
            {
                k.push_back(s[i]);
            }
        }
        return k;
    }
};