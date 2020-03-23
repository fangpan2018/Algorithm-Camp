/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 搜索二叉树，用中续遍历，就会得到一个增长的vector。
// 用上面的判断。
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector <int> re;
        bool res = true;
        res = add(root, re, res);
        return res;

    }
    
    bool add(TreeNode* root, vector<int> &re, bool &res){
        if(root&&res){
            res = res&(add(root->left, re, res));
            if(re.size()==0){re.push_back(root->val);}
            else if(root->val>re[re.size()-1]){
                re.push_back(root->val);
            }else{
                return false;
            }
            res = res&(add(root->right, re, res));
        }
        return res;
    }
};