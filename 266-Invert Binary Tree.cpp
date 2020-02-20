// faster than 57.70% 
// less than 94.55%


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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)   return root;
        if(!root->left&&!root->right) return root;
        else{
            TreeNode* t;
            t = root->left;
            root->left = root->right;
            root->right = t;
            if(root->left)  invertTree(root->left);
            if(root->right) invertTree(root->right);
        }
        return root;
    }
};