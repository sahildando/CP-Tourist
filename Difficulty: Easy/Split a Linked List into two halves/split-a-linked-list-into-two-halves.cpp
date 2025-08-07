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
        return {head, nullptr}; // Handle edge cases for 0 or 1 node

    Node* slow = head;
    Node* fast = head;

    // Find middle of the circular linked list
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Adjust fast for odd number of nodes
    if (fast->next->next == head) fast = fast->next;

    // Set heads for the two lists
    Node* head1 = head;         // First circular list starts from original head
    Node* head2 = slow->next;   // Second circular list starts from slow->next

    // Break the circular linked list into two parts
    slow->next = head1;         // First list ends at slow and loops back to head1
    fast->next = head2;         // Second list ends at fast and loops back to head2

    return {head1, head2};
        
    }

};
