/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(struct Node* node) {
      if(node==NULL){
            return -1;
        }
        return  1+max(height(node->left),height(node->right));  
    }
};



