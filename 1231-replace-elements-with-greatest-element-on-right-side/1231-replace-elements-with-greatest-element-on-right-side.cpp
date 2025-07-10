class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
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