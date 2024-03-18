class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        vector<int>prev=points[0];
        int cnt_arrow = 1;
        for(int i=1; i<n; i++)
        {
            int currSP = points[i][0];
            int currEP = points[i][1];
            
            int prevSP = prev[0];
            int prevEP = prev[1];
            if(currSP > prevEP) // no overlapping
            {
                prev = points[i];
                cnt_arrow++;
            }
            else // pakka overlaping exist here
            {
                prev[0]=max(currSP, prevSP);
                prev[1]=min(currEP, prevEP);
            }
        }
        return cnt_arrow;
    }
};