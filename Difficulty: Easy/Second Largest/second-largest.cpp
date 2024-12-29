//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
     
        int n = arr.size();
        
        int first_largest = -1 , second_largest = -1;
        
        for(int i = 0; i< n ; i++){
            
            if(arr[i] > first_largest){
                
                second_largest = first_largest;
                first_largest = arr[i];
            }
            
            else if(arr[i] < first_largest && arr[i] > second_largest){
                
                second_largest = arr[i];
            }
            
        }
        
        return second_largest;
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends