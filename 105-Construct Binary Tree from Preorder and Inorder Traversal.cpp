// faster than 80.09% 
// less than 38.10%



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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return create(preorder,0,preorder.size(),inorder,0,inorder.size());
    }
    
    TreeNode* create(vector<int>& preorder, int h, int e, vector<int>& inorder, int hh, int ee){
        if(h>=e||hh>ee) return NULL;
        
        auto p = find(inorder.begin()+hh, inorder.begin()+ee, preorder[h]);
        int length = p - inorder.begin() - hh;
        
        TreeNode* root = new TreeNode(preorder[h]);
        root -> left = create(preorder,h + 1,h + 1 + length,inorder,hh,hh + length);
        root -> right = create(preorder,h + 1 + length,e,inorder,hh + length + 1,ee);
        return root;
    }
};