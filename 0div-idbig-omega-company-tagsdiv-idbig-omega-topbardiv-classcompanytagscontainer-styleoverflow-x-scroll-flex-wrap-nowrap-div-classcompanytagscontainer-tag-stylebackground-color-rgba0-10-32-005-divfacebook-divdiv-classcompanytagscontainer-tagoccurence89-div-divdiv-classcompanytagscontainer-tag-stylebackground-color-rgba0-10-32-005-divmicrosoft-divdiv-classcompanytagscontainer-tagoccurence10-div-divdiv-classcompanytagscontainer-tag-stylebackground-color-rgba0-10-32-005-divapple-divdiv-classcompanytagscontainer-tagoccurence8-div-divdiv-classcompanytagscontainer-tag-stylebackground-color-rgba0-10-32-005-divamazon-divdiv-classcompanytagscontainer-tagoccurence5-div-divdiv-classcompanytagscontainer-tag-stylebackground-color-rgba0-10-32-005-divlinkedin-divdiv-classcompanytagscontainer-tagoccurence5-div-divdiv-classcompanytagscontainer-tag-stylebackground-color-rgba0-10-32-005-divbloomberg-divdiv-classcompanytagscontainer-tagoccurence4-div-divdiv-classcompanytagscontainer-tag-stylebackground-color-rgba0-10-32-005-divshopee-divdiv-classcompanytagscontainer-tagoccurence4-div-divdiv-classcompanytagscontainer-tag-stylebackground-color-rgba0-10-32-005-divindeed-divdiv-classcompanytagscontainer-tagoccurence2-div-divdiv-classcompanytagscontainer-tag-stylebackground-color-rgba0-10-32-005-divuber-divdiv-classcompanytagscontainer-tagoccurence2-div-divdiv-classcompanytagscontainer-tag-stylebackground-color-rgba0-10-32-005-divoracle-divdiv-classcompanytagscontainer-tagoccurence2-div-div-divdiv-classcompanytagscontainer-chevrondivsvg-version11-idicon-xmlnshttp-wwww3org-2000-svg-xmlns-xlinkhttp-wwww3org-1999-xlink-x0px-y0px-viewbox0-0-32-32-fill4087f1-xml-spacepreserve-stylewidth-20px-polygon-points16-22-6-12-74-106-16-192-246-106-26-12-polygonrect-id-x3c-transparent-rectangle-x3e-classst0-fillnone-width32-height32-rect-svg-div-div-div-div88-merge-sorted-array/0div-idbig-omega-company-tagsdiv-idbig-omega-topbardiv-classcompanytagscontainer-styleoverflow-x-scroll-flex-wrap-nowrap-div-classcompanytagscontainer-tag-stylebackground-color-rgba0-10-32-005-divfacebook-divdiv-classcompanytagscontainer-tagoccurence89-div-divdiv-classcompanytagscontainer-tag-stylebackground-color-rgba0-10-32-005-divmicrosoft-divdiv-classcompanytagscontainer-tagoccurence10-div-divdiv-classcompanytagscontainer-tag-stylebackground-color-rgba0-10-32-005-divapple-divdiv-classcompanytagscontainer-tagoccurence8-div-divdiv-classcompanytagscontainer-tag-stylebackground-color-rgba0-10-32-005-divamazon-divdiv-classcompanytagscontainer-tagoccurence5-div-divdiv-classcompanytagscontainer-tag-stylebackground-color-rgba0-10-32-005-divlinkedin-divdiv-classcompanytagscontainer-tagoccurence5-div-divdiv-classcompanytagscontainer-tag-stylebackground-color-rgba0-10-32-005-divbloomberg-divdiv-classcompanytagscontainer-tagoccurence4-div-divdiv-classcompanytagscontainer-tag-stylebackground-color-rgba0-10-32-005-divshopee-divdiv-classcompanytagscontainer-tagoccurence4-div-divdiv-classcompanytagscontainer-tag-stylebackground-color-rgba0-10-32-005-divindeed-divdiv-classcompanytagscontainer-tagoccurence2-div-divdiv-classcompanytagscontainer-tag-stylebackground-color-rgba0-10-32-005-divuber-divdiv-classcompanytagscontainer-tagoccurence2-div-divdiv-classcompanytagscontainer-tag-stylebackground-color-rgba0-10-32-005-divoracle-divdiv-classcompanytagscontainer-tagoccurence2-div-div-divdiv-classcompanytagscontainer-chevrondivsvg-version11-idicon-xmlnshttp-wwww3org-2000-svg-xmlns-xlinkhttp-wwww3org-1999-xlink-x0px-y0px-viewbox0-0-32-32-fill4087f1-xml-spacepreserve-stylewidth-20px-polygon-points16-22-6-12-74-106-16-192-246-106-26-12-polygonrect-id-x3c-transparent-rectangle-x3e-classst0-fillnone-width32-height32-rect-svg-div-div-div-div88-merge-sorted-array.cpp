class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
      /* // Using two pointer's approach
        int i = m-1; int j=n-1;
        int k= m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--; k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--; k--;
            }
        }
        while(i>=0)
        {
            nums1[k]=nums1[i];
            i--; k--;
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--; j--;
        }*/
        
        for(int i=0; i<n; i++)
        {
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};