class Solution {
public:
    void push(int value) {
        list.push_back(value);
        if(mi.empty()||value<=mi.back())    mi.push_back(value);
    }
    void pop() {
        if(list.back() == mi.back())    mi.pop_back();
        list.pop_back();
    }
    int top() {
        return list.back();
    }
    int min() {
        return(mi.back());
    }
    
private:
    vector<int> list;
    vector<int> mi;
};