/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
public:
    pair<Node*, Node*> splitList(Node *head) {
              if (!head || !head->next) 
        return {head, nullptr}; 
    Node* slow = head;
    Node* fast = head;

    
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

   
    if (fast->next->next == head) fast = fast->next;

   
    Node* head1 = head;         
    Node* head2 = slow->next;   

    
    slow->next = head1;        
    fast->next = head2;         
    return {head1, head2};
        
    }

};
