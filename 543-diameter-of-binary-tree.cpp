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
// 需要注意，我们递归的去遍历每一个节点时，需要求其左子树和右子树的高度，
// 这样一可以求出每一个节点的高度，还可以将其左子树和右子树的高度相加作为树的直径。
// root的直径就是前面求出的所有直径中最大的。
// 需要引入全局变量。
// 
class Solution {
public:
    int re;
    int diameterOfBinaryTree(TreeNode* root) {
        re = 0;
        deep(root);
        return re;
    }

    int deep(TreeNode* root){
        if(root){
            int l = deep(root->left);
            int r = deep(root->right);
            re = re>(l+r)?re:(l+r);
            return 1 + (l>r?l:r); 
        }else{return 0;}
    }
};