// Iterative solution using stack

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            while (root) {
                todo.push(root);
                root = root -> left;
            }
            root = todo.top();
            todo.pop();
            nodes.push_back(root -> val);
            root = root -> right;
        }
        return nodes;
    }
};


// Recursive solution

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        inorder(root, nodes);
        return nodes;
    }
private:
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) {
            return;
        }
        inorder(root -> left, nodes);
        nodes.push_back(root -> val);
        inorder(root -> right, nodes);
    }
};


// Morris traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        while (root) {
            if (root -> left) {
                TreeNode* pre = root -> left;
                while (pre -> right && pre -> right != root) {
                    pre = pre -> right;
                }
                if (!pre -> right) {
                    pre -> right = root;
                    root = root -> left;
                } else {
                    pre -> right = NULL;
                    nodes.push_back(root -> val);
                    root = root -> right;
                }
            } else {
                nodes.push_back(root -> val);
                root = root -> right;
            }
        }
        return nodes;
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
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> re;
//         add(root, re);
//         return re;
//     }
//     void add(TreeNode* root, vector<int> &res){
//         if(root){
//             add(root->left, res);
//             res.push_back(root->val);
//             add(root->right, res);
//         }
//         return;
//     }
// };