class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0; int right = height.size()-1;
       
        int max_Area =0;
        while(left < right)
        {
            int width = right-left;
            int minHeight = min(height[left], height[right]);
            int curr_Area = width * minHeight;
            
            max_Area = max(max_Area, curr_Area);
            
            if(height[left]<height[right])
            {
                left++;;
            }
            else
            {
                right--;
            }
        }
        return max_Area;
    }
};