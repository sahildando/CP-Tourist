/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
      void left(Node* root,vector<int>&ans,int lvl){
      if(!root)
        return;
        
        if(lvl==ans.size())
            ans.push_back(root->data);
        left(root->left,ans,lvl+1);
        left(root->right,ans,lvl+1);
  }
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        
        left(root,ans,0);
        return ans;
    }
};

 