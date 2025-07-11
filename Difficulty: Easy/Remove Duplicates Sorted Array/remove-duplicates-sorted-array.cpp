class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n == 0)return 0;
        
        int i = 0;
        
        for (int j = 0; j<n; j++){
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;
    }
};