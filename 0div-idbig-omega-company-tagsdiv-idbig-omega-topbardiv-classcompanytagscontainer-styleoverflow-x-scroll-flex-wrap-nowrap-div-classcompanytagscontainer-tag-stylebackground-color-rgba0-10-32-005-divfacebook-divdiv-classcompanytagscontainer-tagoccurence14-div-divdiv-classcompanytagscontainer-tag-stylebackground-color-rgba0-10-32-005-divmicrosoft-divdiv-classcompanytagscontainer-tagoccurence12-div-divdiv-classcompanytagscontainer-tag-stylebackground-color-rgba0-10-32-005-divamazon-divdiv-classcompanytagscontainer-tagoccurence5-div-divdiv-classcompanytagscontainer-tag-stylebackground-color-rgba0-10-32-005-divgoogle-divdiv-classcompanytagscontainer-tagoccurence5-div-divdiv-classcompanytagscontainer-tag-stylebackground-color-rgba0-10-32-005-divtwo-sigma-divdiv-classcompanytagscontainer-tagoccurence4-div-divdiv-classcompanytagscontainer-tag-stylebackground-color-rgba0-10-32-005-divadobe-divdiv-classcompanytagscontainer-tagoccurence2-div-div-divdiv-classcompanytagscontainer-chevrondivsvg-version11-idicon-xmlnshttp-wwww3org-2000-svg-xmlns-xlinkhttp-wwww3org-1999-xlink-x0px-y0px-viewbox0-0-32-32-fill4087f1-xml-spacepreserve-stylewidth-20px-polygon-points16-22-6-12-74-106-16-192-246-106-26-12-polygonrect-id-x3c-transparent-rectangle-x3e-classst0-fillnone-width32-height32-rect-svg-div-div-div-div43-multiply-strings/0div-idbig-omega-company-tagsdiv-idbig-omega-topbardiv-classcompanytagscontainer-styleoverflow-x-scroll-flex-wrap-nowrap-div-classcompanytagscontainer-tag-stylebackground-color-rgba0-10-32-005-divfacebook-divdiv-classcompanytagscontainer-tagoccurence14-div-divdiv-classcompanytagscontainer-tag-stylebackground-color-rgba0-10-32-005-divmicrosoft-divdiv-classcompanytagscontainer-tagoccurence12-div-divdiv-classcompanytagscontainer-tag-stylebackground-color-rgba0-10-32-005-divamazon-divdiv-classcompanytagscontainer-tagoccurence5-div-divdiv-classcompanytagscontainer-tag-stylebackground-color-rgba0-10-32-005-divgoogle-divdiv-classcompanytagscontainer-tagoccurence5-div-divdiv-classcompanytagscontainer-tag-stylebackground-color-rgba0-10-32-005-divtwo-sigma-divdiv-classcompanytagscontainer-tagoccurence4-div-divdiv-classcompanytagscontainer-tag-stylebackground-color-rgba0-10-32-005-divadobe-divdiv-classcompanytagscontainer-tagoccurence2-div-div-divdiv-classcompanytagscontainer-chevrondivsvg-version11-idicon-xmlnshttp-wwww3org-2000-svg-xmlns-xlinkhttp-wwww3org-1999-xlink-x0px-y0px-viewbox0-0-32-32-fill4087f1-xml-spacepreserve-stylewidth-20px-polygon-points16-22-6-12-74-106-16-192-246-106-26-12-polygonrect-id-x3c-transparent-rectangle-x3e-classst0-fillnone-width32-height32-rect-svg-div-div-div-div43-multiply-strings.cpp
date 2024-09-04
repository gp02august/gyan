class Solution {
public:
    string multiply(string num1, string num2) {
        string res = "";
        
//         unsigned long long k1=0, k2=0;
//         for(char ch:num1){
//             k1 = k1*10 + (ch-'0');
//         }
//         for(char ch:num2){
//             k2 = k2*10 + (ch-'0');
//         }
//         unsigned long long ans = k1*k2;
//         res = to_string(ans);
//         return res;   
// above approach solved the problem but it have certain range of long long, int , unsigned
// int, unsigned long long and that's why it fails to pass all the test cases and now avoid 
// to use of primitive data types in this question for storing result....
        
        // now we do multiply didgit by digit... another approach
        
        int n = num1.length(); int m = num2.length();
        vector<int>ans(m+n, 0);
        // now reverse it sothat mulplication became more easily do...
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int mul = (num1[i]-'0')*(num2[j]-'0');
                
                ans[i+j] +=mul;
                ans[i+j+1] +=ans[i+j] / 10; // keep carry
                ans[i+j] %=10; // keep only last digit
            }
        }
        
        // now extract ans from vector and the ans is in reverse order so we traverse from end of vector.....
        for(int i=ans.size()-1; i>=0; i--){
            if(!(res.empty() && ans[i]== 0)){
                res.push_back(ans[i] + '0');
            }
        }
        
        return res.empty()?"0":res;
    }
};