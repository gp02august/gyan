class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        vector<int>freq;
        for(auto i:mp)
        {
            freq.push_back(i.second);
        }
        sort(freq.begin(), freq.end());
        /*
        for(size_t i=0; i<freq.size(); i++)
        {
            if(k)
            {
                freq.erase(freq.begin());
                //cnt++;
                k--;
            }
            
            //int res=0;
            //res = cnt+freq[]-m;
        }
        
        
        cout<<freq.size();
        return freq.size();
    }*/
        int sum = 0;
        int remainingUnique = 0;
        
        for (int i = 0; i < freq.size(); ++i) {
            sum += freq[i];
            
            if (sum > k) {
                remainingUnique = freq.size() - i;
                break;
            }
        }
        
       
        return remainingUnique;
    }
};