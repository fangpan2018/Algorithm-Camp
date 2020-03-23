// faster than 20.64% 
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((root->val>p->val)&&(root->val>q->val))  return lowestCommonAncestor( root->left,  p,  q);
        if((root->val<p->val)&&(root->val<q->val))  return lowestCommonAncestor( root->right,  p,  q);
        return root;
    }
};


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
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         int pv = p->val>=q->val?q->val:p->val, qv = p->val>=q->val?p->val:q->val, rootv = root->val;

//         while(root){
//             if(pv<=rootv&&qv>=rootv)  {return root;}
//             else if(pv>=rootv&&qv>=rootv){
//                 root = root->right;
//                 rootv = root->val;
//             }else if(pv<=rootv&&qv<=rootv){
//                 root = root->left;
//                 rootv = root->val;
//             }
//         }
//         return NULL;
//     }
// };