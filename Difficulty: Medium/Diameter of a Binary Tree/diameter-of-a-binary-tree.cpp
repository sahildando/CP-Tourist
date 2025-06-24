/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int diameterRecur(Node* root, int& res) {
        if (root == nullptr)
            return 0;
        
        int lHeight = diameterRecur(root->left, res);
        int rHeight = diameterRecur(root->right, res);
        
       
        res = max(res, lHeight + rHeight);

       
        return 1 + max(lHeight, rHeight);
    }

    int diameter(Node* root) {
        int res = 0;
        diameterRecur(root, res);
        return res;
    }
};
