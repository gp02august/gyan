class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // vector<int>ans;
        // string s="";
        // for(int i=0; i<digits.size(); i++){
        //     s +=to_string(digits[i]);
        // }
        // int res = stoi(s) + 1;
        // cout<<res;
        // while(res != 0){
        //     ans.push_back(res%10);
        //     res /=10;
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;   this approach is not suitable for large value when i conert from string to integer it failed so we can doe as new approach as.....
        
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};