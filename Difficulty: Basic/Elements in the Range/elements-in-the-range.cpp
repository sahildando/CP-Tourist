class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        
        unordered_set<int> store;
        
        for (int i=0; i<n; i++){
            store.insert(arr[i]);
        }
        
        for (int i=A;i<=B;i++){
            if (store.find(i) == store.end())
            return false;
        }
        return true;
    }
};
