// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s) {
    // Code here
      int n=s.size();
    if(n%2!=0)s.pop();//if len is odd pop
    int temp;
    if(!s.empty()){//if stack not empty
   temp=s.top();//store top val
    s.pop();
    }
    while(!s.empty()){
        if(abs(temp-s.top())!=1)return false;//compare cur top with prev top 
        //if it's difference not equal to one return false
        else{
            temp=s.top();//else update cur top as prev top to check further
            s.pop();
        }
    }
    return true;
}