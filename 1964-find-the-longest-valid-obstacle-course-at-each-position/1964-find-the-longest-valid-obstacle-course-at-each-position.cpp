class Solution {
public:
    int firstGreater(vector<int>&A, int target)
    {
        return upper_bound(begin(A), end(A), target) - begin(A);
    }
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int>ans;
        vector<int>tail;
        
        for(auto obstacle : obstacles)
        {
            if(tail.empty() || obstacle >= tail.back())
            {
                tail.push_back(obstacle);
                ans.push_back(tail.size());
            }
            
            else
            {
                int idx = firstGreater(tail, obstacle);
                tail[idx] = obstacle;
                ans.push_back(idx+1);
            }
        }
        
        return ans;
    }
};