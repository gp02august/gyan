class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans(gain.size()+1);
        ans.push_back(0);
        int sum =0;
        for(int i=0; i<gain.size(); i++)
        {
            sum +=gain[i];
            ans.push_back(sum);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        int maxi = ans[n-1];
        return maxi;
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