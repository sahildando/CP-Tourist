// User function template for C++
class Solution {
  public:
    
      
         bool allZero(vector<int>& count) {
        return count==vector<int>(26, 0);
    }
    int search(string &pat, string &txt) {
	    int k = pat.size();
	    vector<int> count(26, 0);
	    for(char &ch : pat) {
	        count[ch-'a']++;
	    }
	    int i = 0, j = 0;
	    int n = txt.size();
	    int result = 0;
	    while(j < n) {
	        int idx = txt[j]-'a';
	        count[idx]--;
	        
	        if(j - i + 1 == k) {
	            if(allZero(count)) {
	                result++;
	            }
	            
	            count[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return result;
    }
};