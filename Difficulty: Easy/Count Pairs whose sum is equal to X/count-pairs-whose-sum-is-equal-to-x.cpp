/*
Structure of the node of the linked list is as
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
       
        map<int, int> mpp;

        
        Node* temp1 = head1;
        while (temp1 != nullptr) {
            mpp[temp1->data]++;
            temp1 = temp1->next;
        }

        
        int c = 0;
        Node* temp2 = head2;
        while (temp2 != nullptr) {
            if (mpp.find(x - temp2->data) != mpp.end()) {
                c++;
            }
            temp2 = temp2->next;
        }

        return c;
    }
};
