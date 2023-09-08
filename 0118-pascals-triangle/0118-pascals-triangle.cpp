class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 0)
            return ans;
        ans.push_back(vector<int>{1});  // Initialize the first row with a single element 1
        
        for(int i=1; i<numRows; i++)
        {
            vector<int>row;
            vector<int>prevrow = ans[i-1];
             row.push_back(1);  // First element of each row is always 1
            
            for(int j=1; j<i; j++)
            {
                // Calculate the elements in between using the sum of the two elements above
                int sum = prevrow[j-1]+prevrow[j];  
                row.push_back(sum);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};