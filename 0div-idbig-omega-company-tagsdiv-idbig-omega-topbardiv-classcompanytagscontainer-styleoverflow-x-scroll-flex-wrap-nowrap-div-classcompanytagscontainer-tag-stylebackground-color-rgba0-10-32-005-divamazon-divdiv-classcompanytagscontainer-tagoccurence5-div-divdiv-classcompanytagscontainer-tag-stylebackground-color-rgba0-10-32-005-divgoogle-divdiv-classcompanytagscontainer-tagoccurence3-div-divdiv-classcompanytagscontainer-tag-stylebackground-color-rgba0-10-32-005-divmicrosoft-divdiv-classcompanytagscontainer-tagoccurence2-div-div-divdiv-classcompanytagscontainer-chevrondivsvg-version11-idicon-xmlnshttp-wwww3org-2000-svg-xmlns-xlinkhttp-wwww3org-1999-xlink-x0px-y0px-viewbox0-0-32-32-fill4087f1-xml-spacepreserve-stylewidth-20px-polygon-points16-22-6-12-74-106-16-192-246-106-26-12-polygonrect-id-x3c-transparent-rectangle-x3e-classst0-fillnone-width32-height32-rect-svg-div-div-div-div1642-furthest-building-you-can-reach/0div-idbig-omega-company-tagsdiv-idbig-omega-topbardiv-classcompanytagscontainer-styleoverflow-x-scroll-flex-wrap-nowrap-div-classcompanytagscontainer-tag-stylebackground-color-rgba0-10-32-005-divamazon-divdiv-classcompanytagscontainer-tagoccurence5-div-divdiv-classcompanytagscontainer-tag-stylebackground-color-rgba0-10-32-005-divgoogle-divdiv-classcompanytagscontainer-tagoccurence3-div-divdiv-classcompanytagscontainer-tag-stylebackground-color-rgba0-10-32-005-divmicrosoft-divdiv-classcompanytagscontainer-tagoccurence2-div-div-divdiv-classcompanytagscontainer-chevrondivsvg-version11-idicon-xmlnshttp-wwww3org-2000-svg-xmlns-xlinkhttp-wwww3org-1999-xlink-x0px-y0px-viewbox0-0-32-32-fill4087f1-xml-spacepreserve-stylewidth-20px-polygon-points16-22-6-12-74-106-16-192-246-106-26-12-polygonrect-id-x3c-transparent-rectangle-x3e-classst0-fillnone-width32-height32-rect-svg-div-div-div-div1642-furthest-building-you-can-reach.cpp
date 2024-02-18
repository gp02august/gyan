class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int>pq;
        int i=0;
        for(; i<n-1; i++)
        {
            if(heights[i]>=heights[i+1])
                continue;
            
            int need = heights[i+1]-heights[i];
            if(bricks>=need)
            {
                bricks -=need;
                pq.push(need);
            }
            else if(ladders > 0)
            {
                if(!pq.empty())
                {
                    int past_usedbricks=pq.top();
                    if(past_usedbricks > need)
                    {
                        bricks +=past_usedbricks;
                        pq.pop();
                        bricks -=need;
                        pq.push(need);
                        ladders--;
                    }
                    else
                    {
                        ladders--;
                    }
                }
                else
                {
                    ladders--;
                }
            }
            else
            {
                break;
            }
        }
        return i;
    }
};