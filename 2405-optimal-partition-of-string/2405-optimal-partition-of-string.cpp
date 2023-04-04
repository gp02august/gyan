class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        set<char> ss;
        for(auto letter : s)
        {
            if(ss.find(letter) != ss.end())
            {
                
                ss.clear();
                count++;
            }
            ss.insert(letter);
        }
        return count;
    }
};