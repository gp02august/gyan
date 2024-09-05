class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string>s;
        for(vector<int>&v:obstacles){
            string key = to_string(v[0]) +"_"+ to_string(v[1]);
            s.insert(key);
        }
        
        int x =0, y=0; //intial x and y coordinate..
        int maxD = 0; // intially maxximum distance covered robot is 0...
        
        // now intially robot is pointing to north...
        pair<int, int> dir = {0,1}; // North
        
        for(int i=0; i<commands.size(); i++){
            if(commands[i]==-2){ // rotate 90 left
                dir = {-dir.second, dir.first};
            }
            else if(commands[i]==-1){ // turn right 90
                dir={dir.second, -dir.first};
            }
            else{ // now it travel one by one step till not get any obstacles...
                for(int step =0; step<commands[i]; step++){
                    int Nx = x+dir.first;
                    int Ny = y+dir.second;
                    
                    // now we make string to find is it present in set string then wwe break rorbot because it is obstacle...
                    string nObs = to_string(Nx) + "_" + to_string(Ny);
                    if(s.find(nObs) != s.end()){
                        break;
                    }
                    x=Nx;
                    y=Ny;
                }
            }
            maxD = max(maxD, x*x+y*y);
        }
        return maxD;
    }
};