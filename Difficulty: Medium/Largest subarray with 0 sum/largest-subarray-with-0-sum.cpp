//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        unordered_map<int, int>values;
        int sum=0;
        int Max_size=0;
        int n=arr.size();
        
        for (int i = 0; i < n; i++) {
        
            sum += arr[i]; 
            
            if (sum == 0) {
                Max_size=i+1;
            }
            
            else{
                if(values.find(sum)!=values.end()){
                    Max_size=max(Max_size, i-values[sum]);
                }
                else{
                    values[sum]=i;
                }
            }
        }

    return Max_size;
        

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends