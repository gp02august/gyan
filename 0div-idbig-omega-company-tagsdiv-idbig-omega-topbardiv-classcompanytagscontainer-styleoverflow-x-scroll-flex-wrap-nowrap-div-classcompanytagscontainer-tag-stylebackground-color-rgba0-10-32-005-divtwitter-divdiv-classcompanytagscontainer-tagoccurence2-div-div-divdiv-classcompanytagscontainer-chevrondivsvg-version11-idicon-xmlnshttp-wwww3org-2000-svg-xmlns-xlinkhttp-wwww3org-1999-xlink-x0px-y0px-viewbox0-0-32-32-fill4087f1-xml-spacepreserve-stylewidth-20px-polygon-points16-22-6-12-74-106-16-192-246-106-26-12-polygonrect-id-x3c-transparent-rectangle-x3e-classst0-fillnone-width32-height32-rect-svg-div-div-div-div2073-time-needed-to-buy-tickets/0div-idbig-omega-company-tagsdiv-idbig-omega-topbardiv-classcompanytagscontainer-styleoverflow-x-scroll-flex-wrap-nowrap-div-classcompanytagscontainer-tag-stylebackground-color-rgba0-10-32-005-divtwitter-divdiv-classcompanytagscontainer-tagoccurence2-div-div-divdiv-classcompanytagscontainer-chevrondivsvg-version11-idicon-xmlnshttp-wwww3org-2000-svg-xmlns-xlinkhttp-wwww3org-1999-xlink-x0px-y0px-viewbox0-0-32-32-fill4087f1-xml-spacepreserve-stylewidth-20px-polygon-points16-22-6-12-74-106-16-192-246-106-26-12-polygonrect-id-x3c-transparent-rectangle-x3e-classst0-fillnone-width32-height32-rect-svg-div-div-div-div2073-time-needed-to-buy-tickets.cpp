class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      int n = tickets.size();
      
      int i = 0;
      int time = 0;
      while(tickets[k]>0){
        if(tickets[i]>0){
          time++;
          tickets[i]--;
        }
        i = (i+1)%n;
      }

      return time;
    }
};