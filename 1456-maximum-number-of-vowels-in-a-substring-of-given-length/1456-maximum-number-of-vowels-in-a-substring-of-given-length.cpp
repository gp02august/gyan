class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int temp1=0, temp2=0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
                temp2++;
    
            if(i-k >= 0)
                if(s[i-k] == 'a' || s[i-k] == 'i' || s[i-k] == 'e' || s[i-k] == 'o' || s[i-k] == 'u')
                    temp2--;
            
            if(temp1<temp2)
                temp1=temp2;
        }
        
            return temp1;
    }
};