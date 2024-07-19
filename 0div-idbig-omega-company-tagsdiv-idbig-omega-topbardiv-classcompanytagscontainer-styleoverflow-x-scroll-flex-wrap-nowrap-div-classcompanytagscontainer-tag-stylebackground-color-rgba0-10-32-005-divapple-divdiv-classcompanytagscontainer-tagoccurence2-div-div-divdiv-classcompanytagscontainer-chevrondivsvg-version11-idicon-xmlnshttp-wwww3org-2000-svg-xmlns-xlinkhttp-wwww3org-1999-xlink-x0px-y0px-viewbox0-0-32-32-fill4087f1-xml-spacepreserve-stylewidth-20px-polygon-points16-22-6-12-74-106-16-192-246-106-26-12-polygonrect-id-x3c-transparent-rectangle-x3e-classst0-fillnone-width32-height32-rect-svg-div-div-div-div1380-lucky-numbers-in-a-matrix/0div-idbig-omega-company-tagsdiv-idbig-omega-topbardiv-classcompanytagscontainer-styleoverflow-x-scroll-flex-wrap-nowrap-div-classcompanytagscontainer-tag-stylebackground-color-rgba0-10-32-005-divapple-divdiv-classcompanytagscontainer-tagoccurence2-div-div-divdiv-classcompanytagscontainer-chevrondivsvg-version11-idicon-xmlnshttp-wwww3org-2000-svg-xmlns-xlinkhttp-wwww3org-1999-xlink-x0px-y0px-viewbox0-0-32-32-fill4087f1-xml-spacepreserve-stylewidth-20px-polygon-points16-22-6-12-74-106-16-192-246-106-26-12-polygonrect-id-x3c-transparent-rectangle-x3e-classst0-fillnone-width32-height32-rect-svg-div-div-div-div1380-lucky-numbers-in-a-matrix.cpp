class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>ans;
        
        for(int i=0; i<m; i++){
            int minElement = matrix[i][0];
            int min_Indx = 0;
            for(int j=0; j<n; j++){
                if(minElement>matrix[i][j]){
                     minElement=matrix[i][j];
                     min_Indx = j;
                }
            }
            bool flag = 1;
            for(int k=0; k<m; k++){
                if(minElement<matrix[k][min_Indx]){
                    minElement = matrix[k][min_Indx];
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans.push_back(minElement);
            }
        }
        return ans;
    }
};