class Solution {
  public:
    int smallestSubstring(string S) {
        vector<int>arr(4,0);
        int l = 0;
        int r = 0;
        int ans = INT_MAX;
        while(r < S.size()){
            arr[S[r]-'0']++;
            if(arr[0] >= 1 && arr[1] >= 1 && arr[2] >= 1){
                ans = min(ans,r-l+1);
                while(arr[S[l]-'0'] > 1){
                    arr[S[l]-'0']--;
                    l++;
                    ans = min(ans,r-l+1);
                }
            }
            r++;
        }
        return (ans==INT_MAX)?-1:ans;
    }
};


