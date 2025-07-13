class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        int i=0;
        
        while(arr[i]<=arr[i+1] and i<n-1)
        {
            i++;
        }
        return i;
        
    }
};