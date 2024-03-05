class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        int i= 0, j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                while(i<j && s[i]==s[i+1])
                {
                    i++;
                } 
                 while(i<j && s[j]==s[j-1])
                 {
                     j--;
                 }
                i++; j--;
            }
            else
            {
                break;
            }
        }
            int res=j-i+1;
            return (res>0)?res:0;
            
    }
};