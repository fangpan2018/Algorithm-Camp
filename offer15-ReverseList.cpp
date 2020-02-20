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
    ListNode* ReverseList(ListNode* pHead) {
        if(!pHead||!pHead->next)    return pHead;
        ListNode *pr = pHead, *ne = pHead;
        pHead = pr->next;
        if(pHead)    ne = pHead->next;
        pr->next = NULL;
        pHead->next = pr;
        while(ne){
            pr = pHead;
            pHead = ne;
            ne = ne->next;
            pHead->next = pr;
        }
        return pHead;
    }
};