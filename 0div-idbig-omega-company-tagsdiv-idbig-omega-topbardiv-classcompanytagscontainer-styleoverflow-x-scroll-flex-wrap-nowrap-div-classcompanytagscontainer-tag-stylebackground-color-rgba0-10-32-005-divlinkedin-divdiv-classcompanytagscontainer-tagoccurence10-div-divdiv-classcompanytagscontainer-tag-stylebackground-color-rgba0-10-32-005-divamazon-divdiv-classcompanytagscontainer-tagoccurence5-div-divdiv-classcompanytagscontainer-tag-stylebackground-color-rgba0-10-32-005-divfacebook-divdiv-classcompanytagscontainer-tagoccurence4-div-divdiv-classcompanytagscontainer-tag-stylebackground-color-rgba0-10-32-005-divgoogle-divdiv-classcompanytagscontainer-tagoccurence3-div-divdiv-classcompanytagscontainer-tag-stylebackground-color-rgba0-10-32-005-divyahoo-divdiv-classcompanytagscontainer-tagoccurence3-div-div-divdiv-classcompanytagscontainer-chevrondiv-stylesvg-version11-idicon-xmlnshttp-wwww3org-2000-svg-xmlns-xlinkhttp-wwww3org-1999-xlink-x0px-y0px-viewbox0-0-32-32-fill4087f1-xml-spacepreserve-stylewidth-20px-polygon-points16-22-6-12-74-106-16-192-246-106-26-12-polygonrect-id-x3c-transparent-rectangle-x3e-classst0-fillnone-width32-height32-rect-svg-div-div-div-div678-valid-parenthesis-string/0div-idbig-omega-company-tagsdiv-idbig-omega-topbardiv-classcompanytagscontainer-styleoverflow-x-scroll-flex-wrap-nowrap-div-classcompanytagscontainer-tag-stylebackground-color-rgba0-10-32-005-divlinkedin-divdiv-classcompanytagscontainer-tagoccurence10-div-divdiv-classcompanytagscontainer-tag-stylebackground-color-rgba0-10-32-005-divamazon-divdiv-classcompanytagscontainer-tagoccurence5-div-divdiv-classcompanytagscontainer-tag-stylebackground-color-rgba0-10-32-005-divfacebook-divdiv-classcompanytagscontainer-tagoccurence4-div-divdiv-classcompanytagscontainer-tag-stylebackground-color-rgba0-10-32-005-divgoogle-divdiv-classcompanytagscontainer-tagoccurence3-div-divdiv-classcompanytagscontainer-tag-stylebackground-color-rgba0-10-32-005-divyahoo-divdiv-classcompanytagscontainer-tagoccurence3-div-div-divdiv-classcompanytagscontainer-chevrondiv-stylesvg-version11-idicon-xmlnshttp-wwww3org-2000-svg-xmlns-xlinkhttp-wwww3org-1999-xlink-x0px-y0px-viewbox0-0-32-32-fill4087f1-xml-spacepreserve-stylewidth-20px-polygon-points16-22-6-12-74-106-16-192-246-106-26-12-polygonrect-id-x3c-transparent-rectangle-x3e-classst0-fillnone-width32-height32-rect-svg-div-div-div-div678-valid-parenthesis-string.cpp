class Solution {
public:
    int t[101][101];
    bool solve(int indx, int open, string &s, int n){
        if(indx==n)
            return open==0;
        
        if(t[indx][open] != -1)
            return t[indx][open];
        bool isValid = false;
        if(s[indx]=='*'){
            isValid |= solve(indx+1, open+1, s, n); // here take string be '('
            isValid |= solve(indx+1, open, s, n); // here take *=empty string
            // if closed small bracket the do.... this option as below given.....
            if(open > 0){
                isValid |= solve(indx+1, open-1, s, n);
            }
        }
        else if(s[indx]=='('){
            isValid |= solve(indx+1, open+1, s, n);
        }
        else if(open > 0){
            isValid |= solve(indx+1, open-1, s, n);
        }
        return t[indx][open] = isValid;
    }
    bool checkValidString(string s) {
        int n = s.length();
        memset(t, -1, sizeof(t));
        /*for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == ')' || s[i] == '*'){
                continue;
            }
            else{
                return false;
                break;
            }
        }
        return true;*/
        
        int indx=0, open=0;
        return solve(indx, open, s, n);
    }
};