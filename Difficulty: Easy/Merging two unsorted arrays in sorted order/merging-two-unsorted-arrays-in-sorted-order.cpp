// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        res.clear();
        
        for (int i=0; i<arr1.size();i++)
        {
            res.push_back(arr1[i]);
        }
        
        for (int i =0; i<arr2.size(); i++)
        {
            res.push_back(arr2[i]);
        }
        
        sort(res.begin(),res.end());
    }
};
