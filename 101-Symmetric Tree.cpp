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
    bool isSymmetric(TreeNode *root) {
            if (!root) return true;
            return check(root->left, root->right);
        }

    bool check(TreeNode* p, TreeNode* q) {

        if (!p || !q) return (p == q);
        return p->val == q->val && check(p->left,q->right) && check(p->right, q->left); 
    }
};