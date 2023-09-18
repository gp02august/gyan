class Solution {
public:
    int binary_search(vector<int>&arr, int left, int right)
    {
        int result = -1;
        int mid = left+(right-left)/2;
        while(left<=right)
        {
            if(arr[mid] == 1)
            {
                result = mid;
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
            mid = left+(right-left)/2;
        }
        return result+1;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        vector<pair<int,int>>ans;
        for(int i=0; i<row; i++)
        {
            int num = binary_search(mat[i],0,col-1);
            ans.push_back({num,i});
        }
        sort(ans.begin(), ans.end());
        vector<int>res(k);
        for(int i=0; i<k; i++)
        {
            res[i]=ans[i].second;
        }
        return res;
    }
};