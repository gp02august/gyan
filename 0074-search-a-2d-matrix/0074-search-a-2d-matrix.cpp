class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=m*n-1;
        int mid= s+(e-s)/2;
        while(s<=e)
        {
            int element=matrix[mid/n][mid%n];
        if(element==target)
        {
            return true;
        }
         if(element<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return false;
    }
};