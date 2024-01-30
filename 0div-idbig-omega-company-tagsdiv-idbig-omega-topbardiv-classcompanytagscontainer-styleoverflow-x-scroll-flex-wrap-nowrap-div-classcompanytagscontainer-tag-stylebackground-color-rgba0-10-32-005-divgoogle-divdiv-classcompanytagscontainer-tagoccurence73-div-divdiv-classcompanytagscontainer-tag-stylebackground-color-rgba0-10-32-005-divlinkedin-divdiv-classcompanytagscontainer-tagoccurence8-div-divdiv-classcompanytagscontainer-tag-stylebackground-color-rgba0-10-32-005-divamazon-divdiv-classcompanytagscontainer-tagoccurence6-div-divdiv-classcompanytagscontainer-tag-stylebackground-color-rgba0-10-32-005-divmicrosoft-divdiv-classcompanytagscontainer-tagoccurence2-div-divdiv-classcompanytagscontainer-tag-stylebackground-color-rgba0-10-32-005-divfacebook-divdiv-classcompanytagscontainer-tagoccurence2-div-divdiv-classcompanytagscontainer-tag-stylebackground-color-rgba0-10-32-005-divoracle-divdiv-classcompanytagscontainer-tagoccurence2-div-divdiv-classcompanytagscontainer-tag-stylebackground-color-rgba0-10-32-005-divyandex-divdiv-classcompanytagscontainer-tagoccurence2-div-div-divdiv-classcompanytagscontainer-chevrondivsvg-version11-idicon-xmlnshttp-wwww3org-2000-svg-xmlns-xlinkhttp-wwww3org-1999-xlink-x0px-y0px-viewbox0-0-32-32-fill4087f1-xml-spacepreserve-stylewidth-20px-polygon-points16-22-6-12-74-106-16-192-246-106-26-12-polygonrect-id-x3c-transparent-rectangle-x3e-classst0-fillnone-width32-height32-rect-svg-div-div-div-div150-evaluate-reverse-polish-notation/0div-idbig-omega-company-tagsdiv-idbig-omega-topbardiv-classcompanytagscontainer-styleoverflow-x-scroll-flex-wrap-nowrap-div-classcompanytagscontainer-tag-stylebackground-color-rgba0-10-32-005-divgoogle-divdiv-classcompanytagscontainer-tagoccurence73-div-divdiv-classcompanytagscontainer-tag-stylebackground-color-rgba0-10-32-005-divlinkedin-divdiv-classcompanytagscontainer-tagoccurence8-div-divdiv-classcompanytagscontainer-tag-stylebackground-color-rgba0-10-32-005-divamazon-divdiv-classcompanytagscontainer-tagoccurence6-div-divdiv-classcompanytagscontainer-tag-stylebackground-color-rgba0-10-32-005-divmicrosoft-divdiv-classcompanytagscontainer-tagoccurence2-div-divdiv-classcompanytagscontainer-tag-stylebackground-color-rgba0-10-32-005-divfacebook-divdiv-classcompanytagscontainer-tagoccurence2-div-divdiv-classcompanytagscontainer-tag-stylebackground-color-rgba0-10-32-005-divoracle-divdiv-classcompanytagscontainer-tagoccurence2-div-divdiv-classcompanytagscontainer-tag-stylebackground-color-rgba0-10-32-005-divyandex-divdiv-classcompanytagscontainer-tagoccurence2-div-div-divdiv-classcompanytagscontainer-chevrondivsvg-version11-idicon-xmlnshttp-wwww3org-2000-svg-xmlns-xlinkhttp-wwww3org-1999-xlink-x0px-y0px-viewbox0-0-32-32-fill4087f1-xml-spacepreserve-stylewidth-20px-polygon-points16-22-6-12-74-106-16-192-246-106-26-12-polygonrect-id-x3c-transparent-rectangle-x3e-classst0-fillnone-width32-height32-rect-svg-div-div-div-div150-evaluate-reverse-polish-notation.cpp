class Solution {
public:
    int solve(int a, int b, string i)
    {
        if(i=="+")
            return a+b;
        
        else if(i=="-")
            return a-b;
        
        else if(i=="*")
            return a*b;
        
        return a/b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<long>s;
        for(string &i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                int b=s.top();
                s.pop();
                
                int a=s.top();
                s.pop();
                
                int ans=solve(a,b,i);
                s.push(ans);
            }
            else
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};