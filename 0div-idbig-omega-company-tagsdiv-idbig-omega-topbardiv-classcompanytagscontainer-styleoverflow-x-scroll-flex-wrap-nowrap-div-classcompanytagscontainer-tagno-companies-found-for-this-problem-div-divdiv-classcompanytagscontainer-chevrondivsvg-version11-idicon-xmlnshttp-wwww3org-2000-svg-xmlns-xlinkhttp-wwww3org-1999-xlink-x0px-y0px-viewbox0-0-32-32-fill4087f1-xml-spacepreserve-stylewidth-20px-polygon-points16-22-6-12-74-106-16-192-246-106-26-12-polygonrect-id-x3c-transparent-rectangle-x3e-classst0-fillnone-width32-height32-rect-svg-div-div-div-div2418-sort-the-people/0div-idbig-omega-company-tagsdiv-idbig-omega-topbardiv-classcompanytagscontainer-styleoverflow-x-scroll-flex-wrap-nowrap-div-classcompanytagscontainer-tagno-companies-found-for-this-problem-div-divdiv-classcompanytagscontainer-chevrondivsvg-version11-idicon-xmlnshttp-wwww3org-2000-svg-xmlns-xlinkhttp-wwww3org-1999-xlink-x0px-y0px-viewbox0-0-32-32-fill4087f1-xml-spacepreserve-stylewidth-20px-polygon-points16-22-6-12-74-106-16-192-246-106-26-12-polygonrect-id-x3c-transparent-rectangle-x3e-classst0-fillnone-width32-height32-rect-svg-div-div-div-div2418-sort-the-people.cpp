class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<string> res;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; ++i) {
            int maxIndex = -1;
            int maxHeight = INT_MIN;

            // Find the index of the maximum height that hasn't been visited yet
            for (int j = 0; j < n; ++j) {
                if (!visited[j] && heights[j] > maxHeight) {
                    maxHeight = heights[j];
                    maxIndex = j;
                }
            }

            // Mark this index as visited
            visited[maxIndex] = true;
            // Add the corresponding name to the result
            res.push_back(names[maxIndex]);
        }

        return res;
    }
};