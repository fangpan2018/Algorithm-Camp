// link list 前面加一个listnode。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 将链表转化成int，相加不可行。因为链表可能很长。

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int l1val = 0;
//         int l2val = 0;
//         int reval = 0;
//         int n = 0;
//         while(l1){
//             l1val = l1val + (l1->val)*pow(10,n) ;
//             n++;
//             l1 = l1->next;
//         }
//         n = 0;
//         while(l2){
//             l2val = l2val + (l2->val)*pow(10,n);
//             n++;
//             l2 = l2->next;
//         }
//         reval = l1val + l2val;
//         ListNode * head = new ListNode;
//         ListNode * p = head;
//         if(reval==0) return head;
//         while(reval>0){
//             p->next = new ListNode(reval%10);
//             p = p->next;
//             reval = reval/10;
//         }
//         return head->next;
//     }
// };

//如果链表的首部需要处理，最好加哨兵（prehead）。

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode *head = new ListNode;
//         ListNode *p = head;
//         int add = 0;
//         int sum = 0;
//         while(l1||l2||add){
//             sum = (l1?l1->val:0)+(l2?l2->val:0)+add;
//             add = sum/10;
//             p->next = new ListNode(sum%10);
//             p = p->next;
//             l1 = l1?l1->next:l1;
//             l2 = l2?l2->next:l2;
//         }
//         return head->next;
//     }
// };


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



