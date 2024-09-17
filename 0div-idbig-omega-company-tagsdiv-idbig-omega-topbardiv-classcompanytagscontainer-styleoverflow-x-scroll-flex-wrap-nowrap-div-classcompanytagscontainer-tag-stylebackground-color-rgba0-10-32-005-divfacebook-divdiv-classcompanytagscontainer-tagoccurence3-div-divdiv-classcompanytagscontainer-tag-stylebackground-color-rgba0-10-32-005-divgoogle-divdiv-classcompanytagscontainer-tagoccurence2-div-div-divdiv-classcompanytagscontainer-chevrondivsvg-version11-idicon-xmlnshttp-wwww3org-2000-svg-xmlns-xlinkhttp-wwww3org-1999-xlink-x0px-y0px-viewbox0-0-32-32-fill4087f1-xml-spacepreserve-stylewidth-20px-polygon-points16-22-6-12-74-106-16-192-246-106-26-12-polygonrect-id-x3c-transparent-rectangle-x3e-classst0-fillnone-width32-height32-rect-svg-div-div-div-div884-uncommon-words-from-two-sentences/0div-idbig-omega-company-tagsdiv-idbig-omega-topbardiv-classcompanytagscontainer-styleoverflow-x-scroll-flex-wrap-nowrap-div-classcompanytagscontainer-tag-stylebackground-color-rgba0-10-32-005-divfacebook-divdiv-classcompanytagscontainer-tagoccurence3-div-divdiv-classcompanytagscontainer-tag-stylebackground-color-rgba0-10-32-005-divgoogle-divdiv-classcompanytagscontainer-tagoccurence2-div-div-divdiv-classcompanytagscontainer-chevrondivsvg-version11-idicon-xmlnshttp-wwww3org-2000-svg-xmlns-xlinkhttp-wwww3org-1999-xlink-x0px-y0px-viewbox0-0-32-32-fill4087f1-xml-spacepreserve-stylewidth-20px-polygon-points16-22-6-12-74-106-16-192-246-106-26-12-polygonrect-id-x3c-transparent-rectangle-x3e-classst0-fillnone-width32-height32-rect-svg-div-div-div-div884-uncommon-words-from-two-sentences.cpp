class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
         unordered_map<string, int> mp;

        // Add words from s1
        stringstream ss1(s1);
        string word;
        while (ss1 >> word) {
            mp[word]++;
        }

        // Add words from s2
        stringstream ss2(s2);
        while (ss2 >> word) {
            mp[word]++;
        }
        vector<string>res;
        for(auto& i:mp){
            if(i.second==1){
                res.push_back(i.first);
            }
        }
        return res;
    }
};