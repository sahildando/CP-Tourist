// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for (int i=0; i<arr.size(); i++)
        {
            smallest = min(arr[i],smallest);
            largest = max(arr[i],largest);
        }
        return {smallest,largest};
    }
};