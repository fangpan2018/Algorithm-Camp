// faster than 5.12% 
// less than 5.26% 



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> re;
        for(int i=nums2.size()-1; i!=-1; i--){
            stk0.push(nums2[i]);
        }
        
        for(int i=0; i!=nums1.size(); i++){
            re.push_back(find(nums1[i]));
        }
        
        return re;
    }
private:
    stack <int> stk0;
    stack <int> stk1;
    int find (int a){
        bool after = false;
        int t, re=-1;
        
        while(!stk0.empty()){
            if(stk0.top()==a) after = true;
            if(after){
                if(stk0.top() > a)  break;
            }
            t = stk0.top();
            stk1.push(t);
            stk0.pop();
        }
        
        if(!stk0.empty()) re = stk0.top();
        
        while(!stk1.empty()){
            t = stk1.top();
            stk0.push(t);
            stk1.pop();
        }
        return re;
    }
};