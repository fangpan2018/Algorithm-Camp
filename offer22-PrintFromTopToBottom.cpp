/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        
        vector<int> ret;
        queue<TreeNode*> tem;
        if(!root)    return ret;
        tem.push(root);
        while(!tem.empty()){
            if(tem.front()->left)    tem.push(tem.front()->left);
            if(tem.front()->right)    tem.push(tem.front()->right);
            ret.push_back(tem.front()->val);
            tem.pop();
        }
        return ret;
    }
};