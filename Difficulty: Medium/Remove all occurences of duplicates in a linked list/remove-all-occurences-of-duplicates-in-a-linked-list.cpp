// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        
        if (head==nullptr)
        {
            return nullptr;
        }
        
        unordered_map<int,int>map;
        Node*curr=head;
        while(curr!=NULL)
        {
            map[curr->data]++;
            curr=curr->next;
        }
        Node*temp=new Node(0);
        Node* tail=temp;
        curr=head;
        
        while (curr != nullptr){
            if (map[curr->data] == 1){
                tail->next = new Node(curr->data);
                tail = tail->next;
            }
            curr = curr->next;
        }
        Node*result=temp->next;
        delete temp;
        
        return result;
        
    }
};