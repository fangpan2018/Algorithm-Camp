// faster than 77.48% 
// less than 27.78%


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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return create(inorder, 0, inorder.size(), postorder, 0, postorder.size());
    }
    
    TreeNode* create(vector<int>& inorder, int h, int e, vector<int>& postorder, int hh, int ee){
        if(e<=h || ee<=hh)  return NULL;
        
        auto p = find(inorder.begin()+h, inorder.begin()+e, postorder[ee-1]);       
        int length = inorder.begin() + e -1 -p;
        TreeNode* root = new TreeNode(postorder[ee-1]);
        root->right = create(inorder, e-length, e, postorder, ee-length-1, ee-1);
        root->left = create(inorder, h, e-length-1, postorder, hh, ee-length-1);
            
        return root;
    }
};