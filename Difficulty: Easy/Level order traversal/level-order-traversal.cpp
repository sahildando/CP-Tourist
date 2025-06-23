/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans; // Handle empty tree

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();

                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);

                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
