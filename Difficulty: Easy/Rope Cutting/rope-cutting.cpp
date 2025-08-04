class Solution {
  public:
    vector<int> RopeCutting(vector<int>& arr) {
        // Complete the function
         sort(arr.begin(),arr.end());
         vector<int>result;
         int n = arr.size();
         
         for (int i=1;i<n;++i){
             if (arr[i] > arr[i-1]){
                 result.push_back(n-i);
             }
         }
         return result;
    }
};