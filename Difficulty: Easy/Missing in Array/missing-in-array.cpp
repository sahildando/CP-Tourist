class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i+1 !=arr[i])return i+1;
        }
        return n+1;
    }
};