class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root) {
            res.push_back(root->val); //根
            preorderTraversal(root->left); //左
            preorderTraversal(root->right); //右
        }
        return res;
    }
};