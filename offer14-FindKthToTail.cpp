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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        queue<ListNode*> res;
        while(pListHead){
            res.push(pListHead);
            pListHead = pListHead->next;
            if(res.size()>k)    res.pop();
        };
        if(res.size()<k)    return NULL;
        else    return res.front();
    }
};