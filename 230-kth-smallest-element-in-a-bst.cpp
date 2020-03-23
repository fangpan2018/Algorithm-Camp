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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> q;
        // q.push(root->val);
        add_to_q(root, q, k);
        // cout<<q.size()<<endl;
        return q.top();

    }
// 
// 用深度优先遍历树， 并加入大顶堆中，w维护一个k大的大顶堆，结果返回top()。
// 注意要将堆的引用传入函数。

    void add_to_q(TreeNode* root, priority_queue<int> &q, int k){
        if (root != NULL) {
            if(q.size()<k){
                q.push(root->val);
            }else if(root->val<q.top()){
                q.push(root->val);
                // cout<<q.top()<<endl;
            }
            while(q.size()>k){
                q.pop();
                // cout<<q.top()<<endl;
            }
            add_to_q(root->left, q, k);
            add_to_q(root->right, q, k);
        }
    }
};