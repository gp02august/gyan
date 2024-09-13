class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        
        for(const auto& i:queries){
            int left_ele = i[0];
            int right_ele = i[1];
            int xor_res = 0;
            for(int j=left_ele; j<=right_ele; j++){
                xor_res ^=arr[j];
            }
            ans.push_back(xor_res);
        }
        return ans;
    }
};