/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()>0){
            TreeNode* head = new TreeNode(pre[0]);
            int len = find(vin.begin(),vin.end(),pre[0])- vin.begin();
            vector<int> pre_(pre.begin()+1, pre.begin()+len+1),vin_(vin.begin(), vin.begin()+len);
            head->left = reConstructBinaryTree(pre_, vin_);
            vector<int> pre__(pre.begin()+len+1, pre.end()), vin__(vin.begin()+len+1, vin.end());
            head->right = reConstructBinaryTree(pre__, vin__);
            return head;
        }else{
            return NULL;
        }
    }
};