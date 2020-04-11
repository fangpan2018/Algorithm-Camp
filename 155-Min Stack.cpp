class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        stk1.push(x);
        if(stk2.empty()||stk2.top() >= x) stk2.push(x);
    }
    
    void pop() {
        if(stk1.top() == stk2.top())    stk2.pop();
        stk1.pop();
    }
    
    int top() {
        return stk1.top();
    }
    
    int getMin() {
        return stk2.top();
    }
private:
    stack<int> stk1,stk2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// 注意用两个stack完成。
// 注意当新的数小于等于收集数的stack的top就加入。

// class MinStack {
// public:
//     /** initialize your data structure here. */
//     MinStack() {

//     }
    
//     void push(int x) {
//         st1.push(x);
//         if(st2.empty()||x <= st2.top())  st2.push(x);
//     }
    
//     void pop() {
//         if(st2.top()==st1.top())    st2.pop();
//         st1.pop();
//     }
    
//     int top() {
//         return st1.top();
//     }
    
//     int getMin() {
//         return st2.top();
//     }
//     private:
//     stack<int> st1,st2;
};