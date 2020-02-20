// faster than 87.03%
// less than 71.05% 

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode prehead(0), *i= &prehead;
        i->next = head;
        int i_ = 0;
        while(head){
            head = head->next;
            if(i_ >= n)  i = i->next;
            i_++;
        }
        i->next = i->next->next;
        return prehead.next;
    }
};