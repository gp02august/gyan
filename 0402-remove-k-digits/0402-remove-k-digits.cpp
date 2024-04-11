class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string ans = "";
        for(int i=0; i<num.length(); i++){
            while(ans.length()>0 && ans.back()>num[i] && k>0){
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
        while(k>0){
            ans.pop_back();
            k--;
        }
        
        int indx =0;
        while(indx <ans.length() && ans[indx]=='0'){
            indx++;
        }
        ans = ans.substr(indx);
        
        if(ans == "")
            return "0";
        
        return ans;
    }
};