// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int i=arr.size()-1;
        int max = arr[i];
        arr[i] = -1;
        
        for (i=i-1;i>=0;i--){
            int curr=arr[i];
            arr[i]=max;
            if (max<curr){
                max=curr;
            }
        }
        return arr;
    }
};