class Solution {
public:
    string intToRoman(int num) {
        vector<string>str={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>val={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman;
        for(int i=0;  num>0; i++){
            while(num>=val[i]){
                roman +=str[i];
                num -=val[i];
            }
        }
        return roman;
    }
};