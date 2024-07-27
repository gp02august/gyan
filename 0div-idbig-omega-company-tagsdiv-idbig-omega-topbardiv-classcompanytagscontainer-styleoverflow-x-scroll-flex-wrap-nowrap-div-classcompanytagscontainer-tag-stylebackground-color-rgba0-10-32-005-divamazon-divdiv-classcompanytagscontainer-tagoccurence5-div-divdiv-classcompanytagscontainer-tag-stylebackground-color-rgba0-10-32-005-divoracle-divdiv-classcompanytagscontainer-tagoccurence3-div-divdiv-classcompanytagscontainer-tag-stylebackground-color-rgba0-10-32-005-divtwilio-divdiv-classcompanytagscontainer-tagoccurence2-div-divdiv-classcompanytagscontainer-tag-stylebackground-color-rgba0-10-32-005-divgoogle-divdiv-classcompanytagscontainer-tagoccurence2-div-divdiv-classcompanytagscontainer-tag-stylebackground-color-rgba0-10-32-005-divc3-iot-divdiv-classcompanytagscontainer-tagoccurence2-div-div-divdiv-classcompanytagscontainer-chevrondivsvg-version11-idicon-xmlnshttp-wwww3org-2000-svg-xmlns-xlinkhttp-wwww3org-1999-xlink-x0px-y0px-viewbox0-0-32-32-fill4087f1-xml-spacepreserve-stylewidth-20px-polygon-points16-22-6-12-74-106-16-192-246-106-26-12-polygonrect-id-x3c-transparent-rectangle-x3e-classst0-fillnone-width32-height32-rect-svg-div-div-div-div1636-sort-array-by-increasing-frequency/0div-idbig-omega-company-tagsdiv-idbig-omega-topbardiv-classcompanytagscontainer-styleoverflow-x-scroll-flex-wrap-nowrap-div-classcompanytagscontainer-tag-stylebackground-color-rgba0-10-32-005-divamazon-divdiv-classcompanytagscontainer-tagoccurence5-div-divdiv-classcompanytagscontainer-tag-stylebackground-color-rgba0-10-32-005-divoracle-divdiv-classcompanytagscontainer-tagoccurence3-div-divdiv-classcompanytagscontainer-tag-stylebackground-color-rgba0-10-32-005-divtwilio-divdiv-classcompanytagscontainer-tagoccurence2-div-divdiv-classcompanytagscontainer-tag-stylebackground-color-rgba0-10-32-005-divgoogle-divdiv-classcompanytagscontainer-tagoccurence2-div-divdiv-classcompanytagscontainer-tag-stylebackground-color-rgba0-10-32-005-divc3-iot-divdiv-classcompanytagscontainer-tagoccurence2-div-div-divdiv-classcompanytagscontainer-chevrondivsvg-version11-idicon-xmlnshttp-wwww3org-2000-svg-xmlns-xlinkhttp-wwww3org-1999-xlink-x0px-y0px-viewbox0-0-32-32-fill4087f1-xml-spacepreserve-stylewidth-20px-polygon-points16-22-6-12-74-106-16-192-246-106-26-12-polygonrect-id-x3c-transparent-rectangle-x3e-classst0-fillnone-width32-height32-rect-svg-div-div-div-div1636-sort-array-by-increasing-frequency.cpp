class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
    //     unordered_map<int,int>mp;
    //     for(auto i:nums){
    //         mp[i]++;
    //     }
    //     vector<int>res;
    //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //     for(auto &i: mp){
    //         pq.push(make_pair(i.second, i.first));
    //     }
    //     while(pq.size()>0){
    //         int freq = pq.top().first;
    //         int ele = pq.top().second;
    //         for(int i=0; i<freq; i++){
    //             res.push_back(ele);
    //         }
    //         pq.pop();
    //     }
    //     return res;
    // }
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Vector to store pairs (element, frequency)
        vector<pair<int, int>> freqPairs;
        for (auto& it : frequencyMap) {
            freqPairs.push_back(make_pair(it.first, it.second));
        }

        // Sort the vector: first by frequency in ascending order, then by value in descending order
        sort(freqPairs.begin(), freqPairs.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first; // If frequencies are the same, sort by value in descending order
            }
            return a.second < b.second; // Otherwise, sort by frequency in ascending order
        });

        // Populate the result vector based on the sorted order
        vector<int> result;
        for (auto& p : freqPairs) {
            for (int i = 0; i < p.second; ++i) {
                result.push_back(p.first);
            }
        }

        return result;
    }
};