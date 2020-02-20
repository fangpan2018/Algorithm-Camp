// 递归写法

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> ret;
    vector<int> printListFromTailToHead(ListNode* head) {
        frth(head);
        return ret;
    }
    void frth(ListNode* head){
        if(!head)    return;
        if(head->next)    frth(head->next);
        ret.push_back(head->val);
    }
};