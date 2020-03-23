//快慢相遇证明有cycle。
//妙～

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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)    
            return false;
        ListNode *fast = head;
        ListNode *slow = head;
        //用快的index后两步做判断，先判断一步的。
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)    return true;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *p = head;
//         ListNode *q = head;
//         if(!head)   return false;
//         因为快的始终比慢的快，并且快的要跨两步，就需要先检查能否跨一步。
//         while(p->next&&q->next&&q->next->next){
//             p = p->next;
//             q = q->next->next;
//             if(p == q)  return true;
//         }
//         return false;
//     }
// };