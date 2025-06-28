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
    void dfs(Node* root, int hd, int depth, map<int, pair<int, int>>& hdMap) {
        if (!root) return;

        if (hdMap.find(hd) == hdMap.end() || depth >= hdMap[hd].second) {
            hdMap[hd] = {root->data, depth};
        }

        dfs(root->left, hd - 1, depth + 1, hdMap);
        dfs(root->right, hd + 1, depth + 1, hdMap);
    }

    vector<int> bottomView(Node* root) {
        vector<int> result;
        if (!root) return result;

        map<int, pair<int, int>> hdMap; // hd -> (node->data, depth)
        dfs(root, 0, 0, hdMap);

        for (auto& it : hdMap) {
            result.push_back(it.second.first);
        }

        return result;
    }
};
