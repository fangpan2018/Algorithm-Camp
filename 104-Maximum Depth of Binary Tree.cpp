// faster than 98.17% 
// less than 100.00%

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return 1 + ((l >= r) ? l : r);
    }
};