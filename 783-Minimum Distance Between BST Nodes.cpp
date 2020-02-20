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
//中序遍历，每次遍历得到的数于前面得到的数做差，后与min做比较，update min值。
class Solution {
public:
    int ret = INT_MAX, pre = -1; 
    int minDiffInBST(TreeNode* root) {
        if(root->left)  minDiffInBST(root->left);
        if(pre>0) ret = min(root->val - pre, ret);
        pre = root->val;
        if(root->right) minDiffInBST(root->right);
        return ret;
    }
};