/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        Node* t1=head1;
        Node* t2=head2;
        Node* dummy=new Node(-1);
        Node* it=dummy;
        unordered_set<int>set;
        while(t2 != nullptr)
        {
            set.insert(t2->data);
            t2=t2->next;
        }
        while(t1 != nullptr)
        {
            if(set.find(t1->data) != set.end())
            {
                it->next=new Node(t1->data);
                it=it->next;
            }
            t1=t1->next;
        }
        return dummy->next;
        
    }
};