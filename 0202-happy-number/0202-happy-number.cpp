class Solution {
public:
    bool isHappy(int n) {
        int val ;
        set<int>s;
        int indx;
        while(1)
        {
            val = 0;
            while(n)
            {
                indx = n%10;
                val += indx*indx;
                n /=10;
            }
            if(val == 1)
                return true;
            else if(s.find(val) != s.end())
                return false;
            
            s.insert(val);
            n= val;
        }
        return true;
    }
};