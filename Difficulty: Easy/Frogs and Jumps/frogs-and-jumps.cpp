// User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool>isVisited(leaves+1,0);
        
        for(int i=0;i<N;i++){
        if(isVisited[frogs[i]])continue;
        if(frogs[i] <= leaves) {
            for (int j= frogs[i]; j<=leaves; j+=frogs[i]){
                isVisited[j] = 1;
            }
        }
    }
    int unvisitedLeaves = 0;
    for (int i=1; i<=leaves; i++){
        if(isVisited[i] == 0)unvisitedLeaves++;
    }
    return unvisitedLeaves;
    }
};
