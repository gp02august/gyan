class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char,int>mp;
        mp['a']=1;
        mp['b']=2;
        mp['c']=3;
        mp['d']=4;
        mp['e']=5;
        mp['f']=6;
        mp['g']=7;
        mp['h']=8;
        mp['i']=9;
        mp['j']=10;
        mp['k']=11;
        mp['l']=12;
        mp['m']=13;
        mp['n']=14;
        mp['o']=15;
        mp['p']=16;
        mp['q']=17;
        mp['r']=18;
        mp['s']=19;
        mp['t']=20;
        mp['u']=21;
        mp['v']=22;
        mp['w']=23;
        mp['x']=24;
        mp['y']=25;
        mp['z']=26;
        
        string res;
        int sum = 0;

        // Convert each character in the string s to its corresponding number
        for (char ch : s) {
            res += to_string(mp[ch]);
        }

        // Calculate the sum of digits after conversion
        for (char c : res) {
            int d = c - '0';  // Convert character to digit
            sum += d;
        }

        // Perform the sum of digits operation k-1 times
        for (int i = 1; i < k; ++i) {
            int newSum = 0;
            while (sum != 0) {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
        }

        return sum;
    }
};