/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head==nullptr)
        {
            return nullptr;
        }
        
        unordered_map<int,int>map;
        ListNode*curr=head;
        while(curr!=NULL)
        {
            map[curr->val]++;
            curr=curr->next;
        }
        ListNode*temp=new ListNode(0);
        ListNode* tail=temp;
        curr=head;
        
        while (curr != nullptr){
            if (map[curr->val] == 1){
                tail->next = new ListNode(curr->val);
                tail = tail->next;
            }
            curr = curr->next;
        }
        ListNode*result=temp->next;
        delete temp;
        
        return result;
        
        
    }
};