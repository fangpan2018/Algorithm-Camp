// faster than 92.14% 
// less than 88.89%


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ret;
        if(!root)   return ret;
        queue<Node*> qu;
        qu.push(root);
        qu.push(NULL);
        vector<int> temp;
        
        while(!qu.empty()){
            Node* n = qu.front();
            qu.pop();
            
            if(n==NULL){
                ret.push_back(temp);
                temp.resize(0);
                if(!qu.empty())  qu.push(NULL);
            }else{
                temp.push_back(n->val);
                for(auto i:n->children) qu.push(i);
            }
        }
        return ret;
    }
};