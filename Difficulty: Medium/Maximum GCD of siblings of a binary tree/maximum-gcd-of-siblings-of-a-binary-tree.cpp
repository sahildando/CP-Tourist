// User function Template for C++

class Solution {
  private:
    int gcd(int a, int b){
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a == b)
            return a;

        if (a > b)
        return gcd(a - b, b);

        return gcd(a, b - a);
    }
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int n) {
        // code here
        int ans = 0;
        sort(arr.begin(), arr.end());

        for(int i = 0; i<n-2; i++){
            if(arr[i][0] != arr[i+1][0])    
                continue;
           
            int c1 = arr[i][1];
            int c2 = arr[i+1][1];

            ans = max(ans, gcd(c1, c2));
        }
        return ans;
    }
};