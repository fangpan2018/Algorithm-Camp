// faster than 97.83%
// less than 100.00%

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* i = head;
        ListNode* tail = head;
        if(tail){
            while(tail){
                if(tail->val != i->val) {
                    i->next = tail;
                    i = tail;
                }
                tail = tail->next;
            }
            i->next = tail;
        }
        return head;
    }
};