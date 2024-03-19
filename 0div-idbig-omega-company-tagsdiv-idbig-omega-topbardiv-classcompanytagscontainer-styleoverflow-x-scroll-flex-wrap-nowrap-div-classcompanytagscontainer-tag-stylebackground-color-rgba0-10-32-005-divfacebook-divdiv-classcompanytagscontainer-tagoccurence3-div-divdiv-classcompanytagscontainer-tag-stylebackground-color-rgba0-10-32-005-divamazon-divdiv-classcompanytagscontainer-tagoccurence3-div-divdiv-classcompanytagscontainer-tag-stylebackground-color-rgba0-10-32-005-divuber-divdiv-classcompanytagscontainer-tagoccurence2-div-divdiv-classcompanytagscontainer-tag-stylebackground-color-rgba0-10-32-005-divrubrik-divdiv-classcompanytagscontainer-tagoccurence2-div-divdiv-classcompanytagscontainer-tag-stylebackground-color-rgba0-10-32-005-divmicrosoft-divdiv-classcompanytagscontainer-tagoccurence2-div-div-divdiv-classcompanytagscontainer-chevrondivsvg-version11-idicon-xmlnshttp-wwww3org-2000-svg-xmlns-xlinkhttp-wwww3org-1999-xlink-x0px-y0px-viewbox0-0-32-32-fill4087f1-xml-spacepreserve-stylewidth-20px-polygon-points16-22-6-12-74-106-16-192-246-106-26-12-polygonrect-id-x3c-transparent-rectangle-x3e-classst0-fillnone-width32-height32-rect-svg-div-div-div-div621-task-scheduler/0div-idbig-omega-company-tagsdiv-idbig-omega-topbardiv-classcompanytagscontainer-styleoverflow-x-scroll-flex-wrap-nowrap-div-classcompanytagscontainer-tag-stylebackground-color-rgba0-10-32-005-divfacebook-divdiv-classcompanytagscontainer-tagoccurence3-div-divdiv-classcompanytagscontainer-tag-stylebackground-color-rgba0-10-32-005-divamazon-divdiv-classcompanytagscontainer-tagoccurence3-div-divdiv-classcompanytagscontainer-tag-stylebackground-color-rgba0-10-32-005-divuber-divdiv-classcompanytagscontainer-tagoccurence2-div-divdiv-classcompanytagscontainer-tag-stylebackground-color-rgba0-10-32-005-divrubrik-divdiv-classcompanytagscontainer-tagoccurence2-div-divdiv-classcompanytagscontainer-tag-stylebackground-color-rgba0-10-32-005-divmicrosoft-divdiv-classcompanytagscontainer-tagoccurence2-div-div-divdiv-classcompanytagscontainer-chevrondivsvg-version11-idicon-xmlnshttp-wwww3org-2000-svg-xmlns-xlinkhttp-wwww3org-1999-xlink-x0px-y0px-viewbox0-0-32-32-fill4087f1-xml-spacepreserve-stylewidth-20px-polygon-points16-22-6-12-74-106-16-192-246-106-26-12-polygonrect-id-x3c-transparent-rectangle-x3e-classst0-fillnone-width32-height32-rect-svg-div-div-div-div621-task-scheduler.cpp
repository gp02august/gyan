class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        for(auto i:tasks)
        {
            mp[i]++;
        }
        vector<int>freq;
        for(auto i:mp)
        {
            freq.push_back(i.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        
        int maxfrq = freq[0];
        int idealtime =(maxfrq-1)*n;
        
        for(int i=1; i<freq.size(); i++)
        {
            idealtime -=min(maxfrq-1, freq[i]);
        }
        
        idealtime = max(0, idealtime);
        
        return tasks.size()+idealtime;
    }
};