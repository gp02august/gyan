class Solution {
public:
    string reverseParentheses(string s) {
       stack<char> st;
        
        for (char ch : s) {
            if (ch == ')') {
                string temp;
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }
                st.pop();  // remove the '(' from the stack
                for (char rev_ch : temp) {
                    st.push(rev_ch);
                }
            } else {
                st.push(ch);
            }
        }
        
        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};