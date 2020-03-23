/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 超时 每次旋转需要遍历所有节点，所以复杂度为n*k.
// 
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL||head->next==NULL)    return head;
//         ListNode *p = head;
//         for(int i=0; i<k; i++){
//             while(p&&p->next&&p->next->next){
//                 p = p->next;
//             }
//             p->next->next = head;
//             head = p->next;
//             p->next = NULL;
//             p = head;
//         }
//         return head;
//     }
// };
// 统筹来看，有一定规律，超过链表长度次数的旋转可以直接用余数的次数。
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)    return head;
        ListNode *p = head;
        int i = 1;
        while(p->next){
            p = p->next;
            i++;
        }
        p->next = head;
        int to = i - (k)%i;
        while(to){
            p = p->next;
            to--;
        }
        head = p->next;
        p->next = NULL;
        return head;
    }
};