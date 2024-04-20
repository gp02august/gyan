class Solution {
public:
    int minDis(char ch){
        return min(ch-'a',(26-(ch-'a')));
    }
    string getSmallestString(string s, int k) {
        for(int i=0; i<s.size(); i++){
            int distance = minDis(s[i]);
            if(distance <= k){
                s[i]='a';
                k -=distance;
            }
            else{
                s[i] -=k;
                break;
            }
        }
        return s;
    }
};