/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 用set存储已经出现的对象。
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // int pos = -1;
        unordered_set<ListNode *> set;
        while(head){
            if(set.count(head)) return head;
            set.insert(head);
            head = head->next;
        }
        return head;
    }
};