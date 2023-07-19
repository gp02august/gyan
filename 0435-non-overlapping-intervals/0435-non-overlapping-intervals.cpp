class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<int> temp(2,0);
        temp[0]= intervals[0][0];
        temp[1]= intervals[0][1];
        int count =0;
       
        for(int i = 1 ; i < n ; i++)
        {
            
            
            int currst = intervals[i][0];
            int currend = intervals[i][1];
            
        
             if( currst < temp[1])  //overlapping 
            {
                
                
              count++;
                
                
           //check for full merge overlapping then update the temp 
             if(currst > temp[0] && currend < temp[1])   
             {
                 
                 temp[0]= currst;
                 temp[1]=currend;
                 
             }
                
                
                
                
            
                
            }
            else     //non overlapping  just update the temp 
            {
                
                 temp[0]= currst;
                 temp[1]=currend;
                
                
                
            }
            
            
            
    
            
            
            
        }
        
        
        return count;
    }
};