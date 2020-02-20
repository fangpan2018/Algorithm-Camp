// link list 前面加一个listnode。

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0), *i = &preHead;
        int jin = 0;
        while (l1 || l2 || jin) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + jin;
            jin = sum / 10;
            i->next = new ListNode(sum % 10);
            i = i->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return preHead.next;
    }
};