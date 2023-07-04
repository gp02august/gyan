class Solution {
public:
    int ans = 0;
    vector<vector<int>> requests;
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        this->requests = requests;
        vector<int> transfers(n, 0);
        backTrack(0, 0, transfers);
        return ans;
    }
    
    void backTrack(int index, int count, vector<int>& transfers) {
        if (index == requests.size()) {
            for (int i : transfers) {
                if (i != 0)
                    return;
            }
            ans = max(ans, count);
            return;
        }
        
        transfers[requests[index][0]]--;
        transfers[requests[index][1]]++;
        backTrack(index + 1, count + 1, transfers);
        
        transfers[requests[index][0]]++;
        transfers[requests[index][1]]--;
        backTrack(index + 1, count, transfers);
    }
};