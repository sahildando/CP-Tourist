class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int windowSum = 0;
        int i = 0;
        int j = k;
        
        if(n<k)
        {
            return -1;
        }
            for (int i=0; i<k; i++)
            {
                windowSum += arr[i];
            }
            
            int maxSum = windowSum;
            
            for(int i=k;i<n;i++)
            {
                windowSum += arr[i] - arr[i-k];
                maxSum =max(maxSum,windowSum);
            }
            
            return maxSum;
        }
};