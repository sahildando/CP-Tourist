class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> temp(n);
        
        for (int i=0; i < n; i++)
            temp[i] = arr[n -i -1];
        
        for (int i=0; i < n; i++)
             arr[i] = temp[i];
    }
};