class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder_traversal(Node*root,vector<int>& v)
    {
        if (root==NULL)
        {
            return;
        }
        inorder_traversal(root->left,v);
        v.push_back(root->data);
        inorder_traversal(root->right,v);
    }
    
    
    bool isBST(Node* root) {
        
        vector<int>v;
        inorder_traversal(root,v);
        int i=0;
        while(i<v.size()-1)
        {
            if(v[i]>v[i+1])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};