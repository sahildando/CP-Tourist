class Solution {
  public: 
    int find(char c){
        
      if(c=='I')return 1;
      else if(c=='V')return 5;
      else if(c=='X')return 10;
      else if(c=='L')return 50;
      else if(c=='C')return 100;
      else if(c=='D')return 500;
      else if(c=='M')return 1000;
  }
    int romanToDecimal(string &s) {
        // code here
        int n=s.length();
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(find(s[i])<find(s[i+1])){
                sum-=find(s[i]);
            }else{
                sum+=find(s[i]);
            }
        }
        sum+=find(s[n-1]);
        return sum;
    }
};