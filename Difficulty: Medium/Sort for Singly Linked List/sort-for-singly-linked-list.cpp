/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        // code here
        vector<int>v;
        Node* temp = head_ref;
        while (temp != NULL){
        v.push_back(temp -> data);
            temp = temp ->next;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        Node* ans = NULL;
        for ( int i=0; i<v.size(); i++){
            Node* dummy = new Node(v[i]);
            dummy -> next = ans;
            ans = dummy;
        }
        return ans;
    }
};