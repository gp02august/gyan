class Solution {
public:
int dp[51];
int solve(string &s, unordered_set<string> &st, int indx) {
    if (indx >= s.length())
        return 0;
    if (dp[indx] != -1)
        return dp[indx];

    string curr_str = "";
    int minExt = INT_MAX;

    for (int i = indx; i < s.length(); i++) {
        curr_str.push_back(s[i]);
        int temp = 0;
        if (st.find(curr_str) == st.end()) {
            temp = curr_str.length();
        } else {
            temp = 0;
        }
        int next_Ext = solve(s, st, i + 1);
        int totalExt = next_Ext + temp;
        minExt = min(minExt, totalExt);
    }
    return dp[indx] = minExt;
}

int minExtraChar(string s, vector<string>& dictionary) {
    unordered_set<string> st;
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < dictionary.size(); i++) {
        st.insert(dictionary[i]);
    }

     return solve(s, st, 0); 
    } 
    
};