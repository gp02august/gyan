class Solution {
public:
    string removeStr(string &s, string &str){
        stack<char>st;
        for(char &ch:s){
            if(ch==str[1] && !st.empty() && st.top()==str[0]){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    
    int maximumGain(string s, int x, int y) {
        /*int score=0;
        for(int i=0; i<s.length(); i++){
            if(x>y){
                if(s[i]+s[i-1]=="ab"){
                    score +=x;
                    s.erase(s.begin()-1, s.end());
                }
                else if(s[i]+s[i-1]=="ba"){
                    score +=y;
                    s.erase(s.begin()-1, s.end());
                }
            }
            else{
                if(s[i]+s[i-1]=="ba"){
                    score +=y;
                    s.erase(s.begin()-1, s.end());
                }
                else if(s[i]+s[i-1]=="ab"){
                    score +=x;
                    s.erase(s.begin()-1, s.end());
                }
            }
        }
        return score;*/
        
        int n = s.length();
        int score = 0;
        string maxStr = (x>y) ? "ab" : "ba";
        string minStr = (x<y) ? "ab" : "ba";
        
        // first we have to use maximum points so...
        string first = removeStr(s, maxStr);
        int L = first.length();
        int left_str = n-L;
        score +=(left_str / 2) * max(x, y);
        
        // now we use minimum points if operation left on string
        string second = removeStr(first, minStr);
        left_str = L - second.length();
        score +=(left_str/2) * min(x, y);
        
        return score;
    }
};