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