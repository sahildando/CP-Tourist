//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool isBalanced(string& s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (!st.empty() && 
                    ((st.top() == '(' && s[i] == ')') ||
                     (st.top() == '[' && s[i] == ']') ||
                     (st.top() == '{' && s[i] == '}'))) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends