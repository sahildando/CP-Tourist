/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    
    void dfs(Node* node, int hd, int level, 
         map<int, pair<int, int>>& topNodes) {
  
    if (!node) return;
    
    if (topNodes.find(hd) == topNodes.end() || 
        topNodes[hd].second > level) {
        topNodes[hd] = {node->data, level};
    }

    dfs(node->left, hd - 1, level + 1, topNodes);
    dfs(node->right, hd + 1, level + 1, topNodes);
}

    vector<int> topView(Node *root) {
       vector<int> result;
    if (!root) return result;
    
   
    map<int, pair<int, int>> topNodes; 
    
    
    dfs(root, 0, 0, topNodes);

    
    for (auto it : topNodes) {
        result.push_back(it.second.first);
    }

    return result;

    }
};