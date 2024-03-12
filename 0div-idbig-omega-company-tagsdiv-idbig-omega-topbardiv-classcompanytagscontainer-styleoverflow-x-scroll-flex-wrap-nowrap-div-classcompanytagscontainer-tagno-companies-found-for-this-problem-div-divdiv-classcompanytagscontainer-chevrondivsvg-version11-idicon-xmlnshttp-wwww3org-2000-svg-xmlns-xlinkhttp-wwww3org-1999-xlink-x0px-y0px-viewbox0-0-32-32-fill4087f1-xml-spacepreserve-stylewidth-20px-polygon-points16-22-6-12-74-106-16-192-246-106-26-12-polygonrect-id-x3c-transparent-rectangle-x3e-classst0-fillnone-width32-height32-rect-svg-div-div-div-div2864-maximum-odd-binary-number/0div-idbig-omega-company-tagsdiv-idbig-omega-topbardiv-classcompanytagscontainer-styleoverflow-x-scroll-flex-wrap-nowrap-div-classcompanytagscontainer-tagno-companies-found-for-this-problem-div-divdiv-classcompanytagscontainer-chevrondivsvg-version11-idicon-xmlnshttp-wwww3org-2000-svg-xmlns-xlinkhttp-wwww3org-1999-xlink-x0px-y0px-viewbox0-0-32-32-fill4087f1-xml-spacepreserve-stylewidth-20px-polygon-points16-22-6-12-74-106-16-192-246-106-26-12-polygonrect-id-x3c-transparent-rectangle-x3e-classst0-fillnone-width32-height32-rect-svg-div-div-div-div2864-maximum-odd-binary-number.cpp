class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       /* sort(s.rbegin(), s.rend());
        if(s[0]=='1')
        {
            s.erase(0,1);
        }
        s +='1';
        return s;*/ // this is the first approach
        
        // second approach
        
        int n = s.length();
        string res=string(n, '0');
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        int j=0;
        while(cnt>1)
        {
            res[j] +=1;
            j++;
            cnt--;
        }
        res[n-1] +=1;
        return res;
    }
};