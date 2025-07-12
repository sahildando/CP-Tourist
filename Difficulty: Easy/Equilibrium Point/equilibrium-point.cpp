class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
              int n=arr.size();
       int totalsum=0,leftsum=0;
       for(int i=0;i<n;i++){
           totalsum+=arr[i];
       }
       for(int i=0;i<n;i++){
           int rightsum=totalsum-leftsum-arr[i];
           if(rightsum==leftsum)
           return i;
           else
           leftsum+=arr[i];
       }
       return -1;
        
    }
};