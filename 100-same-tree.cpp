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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p1;
        vector<int> q1;
        bianli(p1,p);
        bianli(q1,q);
        if(p1==q1)return true;
        else return false;
    }
    void bianli(vector<int>&a,TreeNode*p)
    {
        if(p==NULL){a.push_back(0);return ;}
        a.push_back(p->val);
        bianli(a,p->left);
        bianli(a,p->right);
      
    }
    
    
    
};