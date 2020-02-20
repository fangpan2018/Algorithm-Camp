//  faster than 100.00% 
//  less than 100.00% 


class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stk0.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int re;
        int leng = stk0.size();
        for(int i=0; i<leng-1; i++){
            int t;
            t = stk0.top();
            stk0.pop();
            stk1.push(t);
        }
        re = stk0.top();
        stk0.pop();
        for(int i=0; i<leng-1; i++){
            int t;
            t = stk1.top();
            stk1.pop();
            stk0.push(t);
        }
        return re;
    }
    
    /** Get the front element. */
    int peek() {
        int re;
        int leng = stk0.size();
        for(int i=0; i<leng-1;i++){
            int t;
            t = stk0.top();
            stk0.pop();
            stk1.push(t);
        }
        re = stk0.top();
        for(int i=0; i<leng-1; i++){
            int t;
            t = stk1.top();
            stk1.pop();
            stk0.push(t);
        }
        return re;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk0.empty();
    }
    
private:
    stack <int> stk0;
    stack <int> stk1;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */