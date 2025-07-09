class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int count =0;
        for (int i=0; i<arr.size();i++){
            if(arr[i] == 0){
                count++;
            }
        }
        for (int j=0; j<arr.size();j++){
            if(j<count){
                arr[j]=0;
            }
            else {
                arr[j]=1;
            }
        }
    }
};
