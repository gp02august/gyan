class Solution {
public:
   static bool compare(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second;
}
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        vector<pair<char, int>>r(mp.begin(), mp.end());

    // Sort the vector based on character frequency
       sort(r.begin(), r.end(), compare);

        string res="";
        for(int i=0; i<=r.size()-1; i++)
        {
            res += string(r[i].second, r[i].first);
        }
        return res;
    }
};