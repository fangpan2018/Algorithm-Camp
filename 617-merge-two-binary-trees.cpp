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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        add(t1, t2);
        return t1;
    }

    void add(TreeNode* &t1, TreeNode* &t2){
        if(t1&&t2){
            t1->val = t1->val + t2->val;
            add(t1->left, t2->left);
            add(t1->right, t2->right);
        }else if (t2){
            t1 = t2;
        }

        
    }
};