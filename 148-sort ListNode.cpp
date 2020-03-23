/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 
// 将NodeList转成vector，再sort，再生成NodeList。
// 
// 
// 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> list;
        while(head){
            list.push_back(head->val);
            head = head->next;
        }
        sort(list.begin(),list.end());
        ListNode prehead(0), *p = &prehead;
        for(int i=0; i<list.size();i++){
            p->next = new ListNode(list[i]);
            p = p->next;
        }
        return prehead.next;
    }
};