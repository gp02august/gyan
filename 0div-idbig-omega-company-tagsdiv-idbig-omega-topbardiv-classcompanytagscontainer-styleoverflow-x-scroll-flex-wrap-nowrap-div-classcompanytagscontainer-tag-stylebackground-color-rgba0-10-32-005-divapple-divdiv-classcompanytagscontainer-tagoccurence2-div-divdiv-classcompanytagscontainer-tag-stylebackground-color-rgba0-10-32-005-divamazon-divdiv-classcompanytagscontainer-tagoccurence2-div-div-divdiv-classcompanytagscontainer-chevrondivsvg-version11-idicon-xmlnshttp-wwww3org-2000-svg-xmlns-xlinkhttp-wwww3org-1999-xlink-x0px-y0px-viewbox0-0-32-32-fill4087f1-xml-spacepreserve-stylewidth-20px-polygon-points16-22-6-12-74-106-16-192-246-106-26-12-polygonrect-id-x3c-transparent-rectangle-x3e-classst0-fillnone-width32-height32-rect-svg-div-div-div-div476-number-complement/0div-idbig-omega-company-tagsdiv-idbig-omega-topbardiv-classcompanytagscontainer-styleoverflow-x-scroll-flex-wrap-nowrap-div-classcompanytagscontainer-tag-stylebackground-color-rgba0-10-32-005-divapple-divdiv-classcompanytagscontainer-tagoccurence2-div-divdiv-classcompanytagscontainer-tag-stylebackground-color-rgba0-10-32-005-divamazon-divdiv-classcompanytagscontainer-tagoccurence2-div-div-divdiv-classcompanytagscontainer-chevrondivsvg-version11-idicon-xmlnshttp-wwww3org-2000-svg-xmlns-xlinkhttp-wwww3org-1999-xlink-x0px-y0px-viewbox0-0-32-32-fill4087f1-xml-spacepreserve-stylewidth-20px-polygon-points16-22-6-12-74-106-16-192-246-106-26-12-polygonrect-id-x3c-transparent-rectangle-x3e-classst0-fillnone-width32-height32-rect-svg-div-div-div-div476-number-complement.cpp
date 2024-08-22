class Solution {
public:
    int findComplement(int num) {
//         int ans = 0;
//         int i=0;
//         while(num != 0){
//             int bit = num&1;
//             ans = ans+bit*pow(10,i);
//             num = num>>1;
//             i++;
//         }
//         // cout<<ans<<endl;
//         string str = to_string(ans);
//         // cout<<str<<endl;
        
//         for (int i = 0; i < str.length(); i++) {
//             if (str[i] == '1') {
//                 str[i] = '0';
//             } else {
//                 str[i] = '1';
//             }
//         }
//         // cout<<str;
//         int res = stoi(str);
//         long long newNum =0; int k=0;
//         while(res != 0){
//             int r = res%10;
//             if(r==1){
//                 newNum = newNum+pow(2,k);
//             }
//             res = res/10;
//             k++;
//         }
//         return int(newNum);   this approach give run time error beaceuse of large valued return after doing all operation and the return type is integer and it exceed the range of int.
        int bitlen =0;
        int t = num;
        while(t != 0){
            bitlen++;
            t >>=1;
        }
        if(num==0)
            return 1;
        if(num==INT_MAX)
            return 0;
        
        unsigned int mask = (1U << bitlen) - 1;
        int res = num ^ mask;
        return res;
    }
};