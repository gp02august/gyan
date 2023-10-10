
class Solution {
public:
int first(vector<int>& nums, int target)
{
    int s = 0, e = nums.size()-1,
        mid = s+(e-s)/2,ans = -1;
                 while(s<=e)
                 {
                     if(nums[mid] == target)
                        {
                          ans = mid; 
                         e = mid -1;
                        }
                     else if(nums[mid] > target)
                     {
                         e = mid-1;
                     }
                     else
                     {
                         s = mid+1;
                     }
                     mid = s+(e-s)/2;
                 }
              return ans;
    
}

int last(vector<int>& nums, int target)
{
    int s = 0, e = nums.size()-1,
        mid = s+(e-s)/2,ans = -1;
                 while(s<=e)
                 {
                     if(nums[mid] == target)
                        {
                          ans = mid; 
                         s = mid +1;
                        }
                     else if(nums[mid] > target)
                     {
                         e = mid-1;
                     }
                     else
                     {
                         s = mid+1;
                     }
                     mid = s+(e-s)/2;
                 }
              return ans;
    
}
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> position;
        position.push_back(first(nums,target));
        position.push_back(last(nums,target));
         return position;
    }
   
   
};