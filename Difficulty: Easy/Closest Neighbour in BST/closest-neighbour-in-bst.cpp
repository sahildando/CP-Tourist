/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int ans = -1;
        Node*curr=root;
        while(curr){
            if (curr->data<=k){
                ans = curr->data;
                curr = curr->right;
            }
            else{
                curr = curr->left;
            }
        }
        return ans;
    }
};