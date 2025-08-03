class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq['z'-'a'] = {};
        int m_id = 0;
        
        for (int i=0;i<s.size();freq[s[i++]-'a']++);
        
        for (int i=0, mx=0;i<'z'-'a'; i++) {
            if (freq[i]>mx){
                mx=freq[i];
                m_id=i;
            }
        }
        return'a' + m_id;
        
        
    }
};