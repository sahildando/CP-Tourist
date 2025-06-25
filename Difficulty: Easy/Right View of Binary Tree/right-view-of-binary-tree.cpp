/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
   
        void right(Node* root, vector<int>&ans,int level){
      if(!root)
        return;
        
        if(level==ans.size())
            ans.push_back(root->data);

        right(root->right,ans,level + 1);
        right(root->left,ans,level + 1);
  }
    vector<int> rightView(Node *root) {
        vector<int>ans;
        right(root,ans,0);
        return ans;
    }
};