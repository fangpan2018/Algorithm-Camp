//  faster than 57.12% 
//  less than 98.59%


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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root) return ret;
        queue <TreeNode *> qu;
        qu.push(root);
        qu.push(NULL);
        vector<int> init;
        
        while(!qu.empty()){
            auto t = qu.front();
            qu.pop();
            
            if(t==NULL){
                ret.push_back(init);
                init.resize(0);
                if(!qu.empty()) qu.push(NULL);
            }else{
                init.push_back(t->val);
                if(t->left)  qu.push(t->left);
                if(t->right) qu.push(t->right);
            }
        }
        return ret;
    }
};