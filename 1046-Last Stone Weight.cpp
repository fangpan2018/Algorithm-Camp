// faster than 59.02% 
// less than 100.00% 

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        int a, b;
        while(pq.size()>1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            if(a!=b)    pq.push(a-b);
        }
        if (pq.size() == 0) return 0;
        return pq.top();
    }
};