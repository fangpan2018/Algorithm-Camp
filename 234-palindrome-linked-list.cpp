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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)  return true;
        vector <int> list;
        while(head){
            list.push_back(head->val);
            head = head->next;
        }

        for(int i=0; i<=list.size()/2; i++){
            if(list[i]!=list[list.size()-1-i]) return false;
        }
        return true;
    }
};