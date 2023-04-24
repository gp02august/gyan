class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(auto x : arr)
        {
            int rem = x%k;
            if(rem<0)
                rem +=k;
            mp[rem]++;
        }
        
        if(mp[0]%2==1)
            return false;
          mp.erase(0);
        
        
        for(auto x : mp)
        {
            int rem = x.first;
            if(mp[rem] != mp[k-rem])
                return false;
        }
        
        return true;
    }
};