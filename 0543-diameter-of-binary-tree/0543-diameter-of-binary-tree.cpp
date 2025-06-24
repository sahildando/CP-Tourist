/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 class Solution {
  public:
    int diameterRecur(TreeNode* root, int& res) {
        if (root == nullptr)
            return 0;
        
        int lHeight = diameterRecur(root->left, res);
        int rHeight = diameterRecur(root->right, res);
        
        // Update the diameter (max path length through current node)
        res = max(res, lHeight + rHeight);

        // Return height of subtree rooted at current node
        return 1 + max(lHeight, rHeight);
    }

   int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        diameterRecur(root, res);
        return res;
    }
};       
 