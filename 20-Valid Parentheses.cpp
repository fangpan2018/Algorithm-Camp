class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(const auto c : s){
            switch(c){
                case '(' : stk.push('('); break;
                case '[' : stk.push('['); break;
                case '{' : stk.push('{'); break;
                case ')' : if(stk.empty()||stk.top()!='(') return false; else stk.pop(); break;
                case ']' : if(stk.empty()||stk.top()!='[') return false; else stk.pop(); break;
                case '}' : if(stk.empty()||stk.top()!='{') return false; else stk.pop(); break;
            }
        }
        return stk.empty();
    }
};