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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* re;
        ListNode* i;
        
        if(l1 && l2){
            if(l1->val > l2->val){
                re = l2;
                i = l2;
                l2 = l2->next;
            }else{
                re = l1;
                i = l1;
                l1 = l1->next;
            }
        
        while(l1 && l2){

            if(l1->val > l2->val){
                i->next = l2;
                i = l2;
                l2 = l2->next;
            }else{
                i->next = l1;
                i = l1;
                l1 = l1->next;
            }
        }
        
        if(l1)  i->next = l1;
        else    i->next = l2;
        }
        else if(l1){
            re = l1;
        }else   re = l2;
        
        return re;
    }
};