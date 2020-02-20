// faster than 94.88%
// less than 69.81%

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode prehead(0), *i = &prehead;
        i->next = head;
        while(i->next){
            while(i->next&&i->next->val == val) i->next = i->next->next;
            if(i->next) i = i->next;
        }
        return prehead.next;
    }
};