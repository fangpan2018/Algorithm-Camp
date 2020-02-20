class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> stackdata;
        int i=0, j=0;
        
        while(i<=pushV.size()){
            if(stackdata.empty()||popV[j]!=stackdata.top()){
                cout<<i<<j<<endl;
                if(i == pushV.size()){
                    if(j == popV.size())return true;
                    else return false;
                }
                stackdata.push(pushV[i]);
                i++;
            }else{
                stackdata.pop();
                j++;
            }
        }
    }
};