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
// 每次把right子树接到left子树到最right到子树下。
// void 函数可以不写return，
// 
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root){
            TreeNode *p = root->left;
            if(p){
                while(p->right){
                    p = p->right;
                }

                p->right = root->right;

                root->right = root->left;
                root->left = NULL;
            }
            

            flatten(root->right);
        }
    }
};