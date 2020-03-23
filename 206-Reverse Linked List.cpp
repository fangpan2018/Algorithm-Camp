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

// 
// 三个指针，每次修改指针前要用一个指针指到下一个。
// 
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *pre = NULL, *cur = head, *i;
//         while(cur){
//             i = cur->next;
//             cur->next = pre;
//             pre = cur;
//             cur = i;
//         }
//         return pre;
//     }
// };