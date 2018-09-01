/*author     :      cedricxs
 *level      :      easy
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
    void bianli(TreeNode*root,int sum,int cur,bool&find)
    {
        if(!root)return ;
        if(find)return ;
        cur+=root->val;
        if(sum==cur&&!root->left&&!root->right)find=true;
        bianli(root->left,sum,cur,find);
        bianli(root->right,sum,cur,find);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        bool r=false;
        bianli(root,sum,0,r);
       return r;
    }
};