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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *headB_ = headB;
        while(headA){
            while(headB){
                if(headA == headB)  return headA;
                else    headB = headB->next;
            }
            headA = headA->next;
            headB = headB_;
        }
        return NULL;
    }
};



// 将两个list收尾相连，两个指针去遍历，一定会在一个周期内相遇。（它们同时达到终点。）
// 妙～

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        while(a != b){
            a = a ? a->next:headB;
            b = b ? b->next:headA;
        }
        return a;
    }
};