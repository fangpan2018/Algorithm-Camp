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
// 笨办法，直接到方法，就是检查，目标是否同时分布在不同到子树中，或者其中一个是root节点，另外一个在root下。
// 
// 
// 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool re = true;
        TreeNode* r = root;
        while(re&&r){
            if(r==p&&in_tree(r, q)||r==q&&in_tree(r, p)){
                re = false;
            }else if(in_tree(r->left, p)&&in_tree(r->right, q)||
                     in_tree(r->left, q)&&in_tree(r->right, p)){
                re = false;
            }else if(in_tree(r->left, p)&&in_tree(r->left, q)){
                r = r->left;
            }else if(in_tree(r->right, p)&&in_tree(r->right, q)){
                r = r->right;
                            }
        }
        return r;
    }

    bool in_tree(TreeNode* root, TreeNode* tofind){
        if(root){
            if(root==tofind) return true;
            else{
                return in_tree(root->left, tofind)||in_tree(root->right, tofind);
            }
        }else{
            return false;
        }
        
    }
};