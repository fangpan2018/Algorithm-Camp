// faster than 12.73% 
// less than 98.81%
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode prehead(0), *i=&prehead;
        // int l = 
        int ii = 0;
        
        while(ii<lists.size()){
            if(!lists[ii])  lists.erase(lists.begin()+ii);
            else    ii++;
        }
        if (lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        i->next = lists[0];
        ii = 0;
        for(int i_=0; i_<lists.size(); i_++){
            if(lists[i_]->val<i->next->val){
                i->next = lists[i_];
                ii = i_;
            }
            if(i_ == lists.size()-1){
                i_ = -1;
                i = lists[ii];
                // cout<< ii;
                // cout << lists[ii]->val<<endl;
                if(lists[ii]->next){
                    lists[ii] = lists[ii]->next;
                }
                else {
                    // cout<< ii << endl<<endl;
                    
                    lists.erase(lists.begin()+ii);
                    // cout<< lists.size() <<endl << endl;
                    if(i)   i->next = lists[0]; ii = 0;
                    // cout<<i->next->val<<endl<<endl;
                }
            }
            if (lists.size()==1)    return prehead.next;
        }
        return prehead.next;
    }
};