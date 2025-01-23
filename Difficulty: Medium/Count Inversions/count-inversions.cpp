//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to merge and count inversions
    int mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
        int i = left;    // Starting index for left subarray
        int j = mid + 1; // Starting index for right subarray
        int k = left;    // Index for temp array
        int count = 0;   // Count of inversions

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                count += (mid - i + 1); // Count inversions
            }
        }

        // Copy remaining elements from left subarray
        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        // Copy remaining elements from right subarray
        while (j <= right) {
            temp[k++] = arr[j++];
        }

        // Copy merged elements back into original array
        for (int idx = left; idx <= right; idx++) {
            arr[idx] = temp[idx];
        }

        return count;
    }

    // Function to use merge sort and count inversions
    int mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
        int count = 0;

        if (left < right) {
            int mid = left + (right - left) / 2;

            // Count inversions in the left half
            count += mergeSortAndCount(arr, temp, left, mid);

            // Count inversions in the right half
            count += mergeSortAndCount(arr, temp, mid + 1, right);

            // Count split inversions
            count += mergeAndCount(arr, temp, left, mid, right);
        }

        return count;
    }

    // Main function to count inversions
    int inversionCount(vector<int>& arr) {
        vector<int> temp(arr.size());
        return mergeSortAndCount(arr, temp, 0, arr.size() - 1);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends