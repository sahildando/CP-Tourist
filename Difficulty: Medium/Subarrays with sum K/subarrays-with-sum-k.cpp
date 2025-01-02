//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> mp; // Corrected `unordered map` to `unordered_map`
        int sum = 0, count = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // If the cumulative sum equals `k`, increment the count
            if (sum == k) 
                count++;

            // If (sum - k) exists in the map, add its frequency to the count
            if (mp.find(sum - k) != mp.end()) 
                count += mp[sum - k];

            // Update the map with the current cumulative sum
            mp[sum]++;
        }

        return count; // Fixed missing semicolon
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends