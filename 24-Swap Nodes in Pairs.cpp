// faster than 70.02%
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
    ListNode* swapPairs(ListNode* head) {
        ListNode prehead(0), *i =&prehead;
        if(!head||!head->next) return head;
        while(head&&head->next){
            i->next = head->next;
            i = head;
            head = head->next->next;
            i->next->next = i;
            i->next =head;
        }
        return prehead.next;
    }
};