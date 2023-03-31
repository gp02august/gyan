class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        // Here we use binary search algo
        for(int i=0;i<arr.size();i++){ 
            int s = 0, e = arr.size()-1;
            int target = 2*arr[i];
            while(s<=e){
                int mid = s+(e-s)/2;
                if((arr[mid]==target) && (i!=mid))return true;
                else if(arr[mid] > target){
                    e = mid-1;
                }
                else   
                    s = mid+1;
            }
        }
        return false;
    }
}; 