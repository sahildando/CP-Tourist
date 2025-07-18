/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution {
  public:
    vector<string> generateCode(int N) {
        // Your code here
        if (N == 0){
            return {""};
        }
        vector <string>prev=generateCode(N-1);
        vector <string>v;
        
        for (int i=0; i<prev.size();i++){
            v.push_back("0"+prev[i]);
        }
        for (int i=prev.size()-1;i>=0;i--){
            v.push_back("1"+ prev[i]);
        }
        return v;
    }
};