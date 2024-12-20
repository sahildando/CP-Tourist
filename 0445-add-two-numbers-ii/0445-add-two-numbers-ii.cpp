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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;

      
        while (l1) {
            s1.push(l1->val);
            l1 = l1->next;
        }

   
        while (l2) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* head = NULL;

        while (!s1.empty() || !s2.empty() || carry) {
            int first = 0, second = 0;

            if (!s1.empty()) {
                first = s1.top();
                s1.pop();
            }

            if (!s2.empty()) {
                second = s2.top();
                s2.pop();
            }

            int temp = first + second + carry;
            carry = temp / 10;

           
            ListNode* node = new ListNode(temp % 10);
            node->next = head; 
            head = node;
        }

        return head;
    }
};
