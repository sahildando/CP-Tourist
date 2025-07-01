class Solution {
  public:
 vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int> q;
        vector<int>ans;
        int start=0;
        int end=k-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0) q.push(i);
        }
        for(int i=0;i<arr.size()&&end<arr.size();i++){
            if(!q.empty()&&q.front()>=start&&q.front()<=end){
                if(q.front()==i){
                    ans.push_back(arr[q.front()]);
                    q.pop();
                }
                else{
                    ans.push_back(arr[q.front()]);
                }
            }
            else{
                ans.push_back(0);
            }
            start++;
            end++;
        }
        
        return ans;
    }
};
