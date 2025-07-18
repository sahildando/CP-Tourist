

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        
        int arr[26]={0};
        
        for(int i=0;i<s.size();i++){
            int num=0;
            char c=s[i];
            num=s[i]-'a';
            arr[num]++;
        }
        int max=-1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(arr[i]>max){
                max=arr[i];
                ans=i;
            }
            else if(arr[i]==max && i<ans){ //for lexicographically small char
                ans=i;
            }
        }
        return ans+'a';
    }
};