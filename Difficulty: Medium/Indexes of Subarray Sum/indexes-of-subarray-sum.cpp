class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int arr_size = arr.size();
        for (int i=0; i<arr_size - 1; i++) {
            if (arr[i] == target)
            return {i+1,i+1};
            
            int sum = arr[i];
            
            for (int j = i+1; j<arr_size; j++) {
                sum +=arr[j];
                if(sum == target)
                return{i+1,j+1};
            }
        }
        
        if (arr[arr_size - 1] == target)
        return {arr_size,arr_size};
        
        return{-1};
    }
};