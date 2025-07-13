class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int transition=-1;
        
        for(int i =0;i<arr.size();i++){
            if(arr[i]==1){
                transition=i;
                break;
            }
        }
        return transition;
        
    }
};