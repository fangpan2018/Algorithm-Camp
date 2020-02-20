/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(!pHead1)    return pHead2;
        else if(!pHead2)    return pHead1;
        ListNode *ret, *i;
        
        
        if(pHead1->val>pHead2->val){
            ret = pHead2;
            i = pHead2;
            pHead2 = pHead2->next;
        }else{
            ret = pHead1;
            i = pHead1;
            pHead1 = pHead1->next;
        }
        while(pHead1&&pHead2){
            if(pHead1->val>=pHead2->val){
                i->next=pHead2;
                i = pHead2;
                pHead2 = pHead2->next;
            }else{
                i->next = pHead1;
                i = pHead1;
                pHead1 = pHead1->next;
            }
        }
        if(!pHead1){
            i->next = pHead2;
        }else{
            i->next = pHead1;
        }
        return ret;
    }
};