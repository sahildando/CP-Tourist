// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       
       if (a.size() != b.size())
       return 0;
       if (a == b)
       return 1;
       else
       return 0;
    }
};