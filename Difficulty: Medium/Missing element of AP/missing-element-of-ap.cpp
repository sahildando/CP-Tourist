// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
         int n=arr.size();
        
       bool flag=true;
       for(int i=1;i<n-1;i++){
           if( (arr[i+1]-arr[i]) != (arr[i]-arr[i-1]) ){
               flag=false;
               break;
           }
       }
       if(flag==true){
           return arr[1]-arr[0]+arr[n-1];
       }
        
        long long arrsum=0;
        for(int i=0;i<n;i++){
            arrsum+=arr[i];
        }
        
       
        long long APsum=0;
        int  a=arr[0];
        int l=arr[n-1];
        int n1=n+1;
        APsum = (long long)(n1) * (a + l) / 2;

        
        return APsum-arrsum;
    
    }
};