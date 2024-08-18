class Solution {
public:
//     int solve(int i, int j){
//         while(i%j==0){
//             i /=j;
//         }
        
//         return i;
//     }
//     int nthUglyNumber(int n) {
//         int i=0; int cnt =0;
//         while(cnt < n){
//             int k = i+1;
//             for(auto i:{2, 3, 5}){
//                 k = solve(k, i);
//             }
//             if(k==1)
//                 cnt++;
            
//             i++;
//         }
//         return i;  this concepts show tle for large values.......

    int nthUglyNumber(int n){
        priority_queue<long, vector<long>, greater<long>>pq;
        unordered_set<long>s;
        
        pq.push(1);
        s.insert(1);
        
        long long uglyNth = 1;
        
        for(int i=1; i<=n; i++){
            uglyNth = pq.top();
            pq.pop();
            if(s.insert(uglyNth * 2).second) {
                pq.push(uglyNth * 2);
            }
            if(s.insert(uglyNth * 3).second) {
                pq.push(uglyNth * 3);
            }
            if(s.insert(uglyNth * 5).second) {
                pq.push(uglyNth * 5);
            }
        }
        return uglyNth;
    }
};