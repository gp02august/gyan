class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(auto i: s)
        {
            mp[i]++;
        }
        int i=0;
        while(i<s.size())
        {
            if(mp[s[i]]==1)
            {
                return i;
            }
            else
            {
                i++;
            }
        }
        return -1;
    }
};