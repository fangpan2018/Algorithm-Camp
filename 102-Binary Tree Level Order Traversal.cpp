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
// 
// 
// 用队列做辅助。
// 
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



// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// 用int level 做辅助。
// 
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {

//         vector<vector<int>> levels;
//         if(root){
//             add(root, 0, levels);
//             }
//         return levels;
//     }
//     void add(TreeNode* root, int level, vector<vector<int>> &levels){
//         if(levels.size()==level){
//             vector <int> l;
//             levels.push_back(l);
//         }

//         levels[level].push_back(root->val);
//         if(root->left){
//             add(root->left, level+1, levels);
//         }
//         if(root->right){
//             add(root->right, level+1, levels);
//         }
//     }
// };