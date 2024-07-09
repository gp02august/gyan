class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        double total_time = 0;
        int current_time = 0;
        int n = customers.size();
        for(auto &i:customers) {
            int arrival_time = i[0];
            int cook_time = i[1];
            
            if(current_time < arrival_time){
                current_time = arrival_time;
            }
            
            int waiting_time = current_time-arrival_time+cook_time;
            
            total_time +=waiting_time;
            current_time +=cook_time;
        }
        return total_time/n;
    }
};