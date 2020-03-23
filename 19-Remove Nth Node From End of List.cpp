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

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         queue<ListNode*> re;
//         ListNode* prehead = new ListNode;
//         prehead->next = head;
//         head = prehead;
//         while(head){
//             re.push(head);
//             head = head->next;
//             if(re.size()>n+1) re.pop();
//         }
//         re.front()->next = re.front()->next->next;
//         return prehead->next;
//     }
// };

// 用双指针要好些。加哨兵。

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