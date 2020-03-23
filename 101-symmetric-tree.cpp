/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 
// 用递归，对称的位置上判断是否存在和是否值相等。
// 有点抽象
// 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root){
            return ismirror(root, root);
        }else{
            return true;
            }
            
        
    }

    bool ismirror(TreeNode* l, TreeNode *r){
        if(l==NULL&&r==NULL)    return true;
        if(l==NULL||r==NULL)    return false;
        return l->val==r->val && ismirror(l->left,r->right) && ismirror(l->right,r->left);
    }
};