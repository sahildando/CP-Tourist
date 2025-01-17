//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
         long long prod=1;
        int zero=0;
        vector<int> ans;
        for (auto num:arr){
            if(num!=0) prod=prod*num;
            else zero++;
        }

        for (auto num:arr){
            if(zero>1) ans.push_back(0);
            else if(num!=0){
                if(zero>0) ans.push_back(0);
                else ans.push_back(prod/num);
            }
            else ans.push_back(prod);
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends