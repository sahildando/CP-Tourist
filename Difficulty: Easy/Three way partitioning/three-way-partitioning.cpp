class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
           int n =arr.size() ;
        int low = 0, mid = 0, high = n-1;
        while(mid <= high)
        {
            if(arr[mid] >= a && arr[mid] <= b) mid++ ;
            else if (arr[mid] < a) swap(arr[low++], arr[mid++]) ;
            else swap(arr[mid], arr[high--]) ;
        }
    }
};
    