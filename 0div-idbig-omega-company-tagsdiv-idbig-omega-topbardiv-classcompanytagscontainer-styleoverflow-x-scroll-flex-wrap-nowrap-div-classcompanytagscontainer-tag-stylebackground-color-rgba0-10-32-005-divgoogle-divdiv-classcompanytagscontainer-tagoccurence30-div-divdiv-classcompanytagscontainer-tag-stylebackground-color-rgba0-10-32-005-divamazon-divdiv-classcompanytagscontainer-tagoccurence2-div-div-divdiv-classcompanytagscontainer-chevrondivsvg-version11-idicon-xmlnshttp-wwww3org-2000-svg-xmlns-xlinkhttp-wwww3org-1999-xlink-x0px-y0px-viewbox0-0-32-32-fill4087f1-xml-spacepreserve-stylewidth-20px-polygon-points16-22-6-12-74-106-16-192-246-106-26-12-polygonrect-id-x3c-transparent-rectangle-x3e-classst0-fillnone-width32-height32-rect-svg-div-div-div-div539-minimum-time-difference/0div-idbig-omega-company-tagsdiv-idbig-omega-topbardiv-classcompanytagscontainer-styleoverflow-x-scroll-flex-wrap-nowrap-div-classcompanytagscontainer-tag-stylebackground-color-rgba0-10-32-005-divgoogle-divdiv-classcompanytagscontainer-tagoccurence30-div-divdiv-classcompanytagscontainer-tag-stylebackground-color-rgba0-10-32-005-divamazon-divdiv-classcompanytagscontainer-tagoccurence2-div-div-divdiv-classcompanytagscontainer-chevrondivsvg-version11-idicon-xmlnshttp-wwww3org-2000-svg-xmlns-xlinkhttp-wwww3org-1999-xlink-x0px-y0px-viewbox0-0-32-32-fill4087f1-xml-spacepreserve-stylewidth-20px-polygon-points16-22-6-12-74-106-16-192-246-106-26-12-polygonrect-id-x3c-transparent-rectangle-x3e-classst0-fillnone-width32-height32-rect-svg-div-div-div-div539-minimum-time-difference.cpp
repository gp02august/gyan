class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0; i<timePoints.size(); i++){
            int h = stoi(timePoints[i].substr(0,2));
            int m = stoi(timePoints[i].substr(3));
            int k = h*60+m;
            minutes.push_back(k);
        }
        sort(minutes.begin(), minutes.end());
        int min_diff = INT_MAX;
        for(int i=0; i<minutes.size()-1; i++){
            min_diff =min(min_diff, minutes[i+1]-minutes[i]);
        }
        min_diff = min(min_diff, 24*60 - minutes.back()+minutes.front());
        return min_diff;
    }
};