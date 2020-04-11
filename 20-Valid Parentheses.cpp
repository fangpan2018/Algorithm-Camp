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


// 执行用时 :0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗 :6.5 MB, 在所有 C++ 提交中击败了100.00%的用户


class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')'||s[0]==']'||s[0]=='}')  return false;
        stack<char> st;
        for(auto c:s){
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            }else{
                if(st.size()){
                    if((st.top()=='(' && c==')') ||
                        (st.top()=='[' && c==']') ||
                        (st.top()=='{' && c=='}')){
                            st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if(st.size()){
            return false;
        }else{
            return true;
        }
    }
};