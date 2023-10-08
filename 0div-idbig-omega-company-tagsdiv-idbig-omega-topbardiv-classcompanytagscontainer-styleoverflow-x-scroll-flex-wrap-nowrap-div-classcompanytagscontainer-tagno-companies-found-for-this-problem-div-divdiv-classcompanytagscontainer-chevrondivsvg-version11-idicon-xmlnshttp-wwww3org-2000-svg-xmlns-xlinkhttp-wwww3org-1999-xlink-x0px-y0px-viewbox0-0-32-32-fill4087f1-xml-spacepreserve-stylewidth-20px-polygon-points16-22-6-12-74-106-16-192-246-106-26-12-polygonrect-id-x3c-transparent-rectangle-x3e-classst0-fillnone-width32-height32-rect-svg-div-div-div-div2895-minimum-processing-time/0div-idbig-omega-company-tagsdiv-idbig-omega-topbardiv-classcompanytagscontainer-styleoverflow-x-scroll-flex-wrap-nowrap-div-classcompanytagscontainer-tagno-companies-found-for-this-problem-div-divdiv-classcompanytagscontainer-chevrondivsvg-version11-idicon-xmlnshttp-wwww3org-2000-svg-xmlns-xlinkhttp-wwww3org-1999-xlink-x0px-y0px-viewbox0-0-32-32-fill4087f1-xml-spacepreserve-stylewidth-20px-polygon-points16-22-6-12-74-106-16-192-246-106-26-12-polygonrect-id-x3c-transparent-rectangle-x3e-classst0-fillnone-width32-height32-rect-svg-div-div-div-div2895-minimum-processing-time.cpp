class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
         sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());
        int ans=0;
        int j=tasks.size()-1;
        
        for(int i=0; i<processorTime.size(); i++)
        {
            int cnt=0;
            
            while(cnt<4)
            {
                ans = max(ans, processorTime[i]+tasks[j]);
                cnt++;
                j--;
            }
        }
        return ans;
    }
};