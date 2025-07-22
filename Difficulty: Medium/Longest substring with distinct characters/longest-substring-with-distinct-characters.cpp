class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char, int>mpp;
        int left = 0;
        int maxlength = 0;
        for (int right = 0; right<s.length(); right++){
            if (mpp.count(s[right]) && mpp[s[right]]>=left){
                left = mpp[s[right]]+1;
            }
            mpp[s[right]] =  right;
            maxlength = max(maxlength, right-left + 1);
        }
        return maxlength;
    }
};
