// faster than 100.00% 
// less than 100.00%

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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)    return 0;
        int l=0, r=0;
        if(root->left){
            // cout<<root->left->val<<endl;
            if(!root->left->right&&!root->left->left)   l=root->left->val;
            else l = sumOfLeftLeaves(root->left);
        }
        if(root->right) r=sumOfLeftLeaves(root->right);
            
        return l+r;
        
    }
};