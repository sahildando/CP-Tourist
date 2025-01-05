//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end()); // Sort the array
        int count = 0;
        int s = 0, e = arr.size() - 1; // Two pointers: start (s) and end (e)

        while (s < e) {
            if (arr[s] + arr[e] >= target) {
                e--; // Move the end pointer left if the sum is >= target
            } else {
                count += e - s; // Count all valid pairs between s and e
                s++; // Move the start pointer right
            }
        }
        return count;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends