class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0, sum=0;
        for(int i=0; i<gain.size(); i++)
        {
            sum +=gain[i];
            if(sum>res)
            res = sum;
        }
        
        return res;
    }
};

/*
int altitude=0,max=0;
        for(int i=0;i<gain.size();i++){
            altitude=altitude+gain[i];
			
            if(max<altitude)
                max=altitude;
        }
       return max;  */