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


// 递归，要多做。
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root){
//             int l = 1+maxDepth(root->left);
//             int r = 1+maxDepth(root->right);
//             return l>r?l:r;
//         }else{
//             return 0;
//         }
//     }
// };