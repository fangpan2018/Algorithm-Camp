// faster than 78.37%
// less than 82.44%


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
    ListNode* reverseList(ListNode* head) {
        ListNode prehead(0), *i = head;
        prehead.next = head;
        
        if(head&&head->next){
            head = head->next;
            prehead.next->next = NULL;
            while(head->next){
                prehead.next = head;
                head = head->next;
                prehead.next->next = i;
                i = prehead.next;
            }
            prehead.next = head;
            prehead.next->next = i;
            return head;
        }else return head;
    }
};