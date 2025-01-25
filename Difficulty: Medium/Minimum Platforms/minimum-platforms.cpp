//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
     
            
            sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int n = arr.size();
        
        int pt_no = 1; // Current platform count
        int max_pt_no = 1; // Maximum platforms needed
        int i = 1; // Pointer for arrivals
        int j = 0; // Pointer for departures
        
        // Traverse through the arrival and departure arrays
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                // A train is arriving before the earliest departure
                pt_no++;
                i++;
            } else {
                // A train departs, freeing up a platform
                pt_no--;
                j++;
            }
            // Update the maximum platforms required
            max_pt_no = max(max_pt_no, pt_no);
        }
        
        return max_pt_no;
            
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends