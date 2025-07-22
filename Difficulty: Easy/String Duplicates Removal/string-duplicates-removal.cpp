// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char>st;
        string res;
        
        for (auto &ch : s){
            if(st.find(ch) == st.end()){
                res+=ch;
                st.insert(ch);
            }
        }
        return res;
    }
};