/*author     :      cedricxs
 *level      :      middle
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void bianli(vector<int>&res,TreeNode*p)
    {
        if(p==NULL)return;
        bianli(res,p->left);
        res.push_back(p->val);
        bianli(res,p->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
bianli(res,root);
        return res;
    }
};