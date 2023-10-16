class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1);
    if (rowIndex == 0)
        return {1};
    row[0] = 1; // First element of each row is always 1

    for (int i = 1; i <= rowIndex; i++) {
        vector<int> prevrow(row.begin(), row.end());
        row[0] = 1; // First element of each row is always 1

        for (int j = 1; j < i; j++) {
            // Calculate the elements in between using the sum of the two elements above
            int sum = prevrow[j - 1] + prevrow[j];
            row[j] = sum;
        }
        row[i] = 1;
    }
    return row;
  }
};