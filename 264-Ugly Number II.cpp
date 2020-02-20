// faster than 9.62% 
// ess than 73.68%



class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1) return 1;
        priority_queue<int, vector<int>, greater<int>> pq;
        int tem=0, i=1;
        pq.push(1);
        while(i<n){
            while(tem == pq.top())  pq.pop();
            tem = pq.top();
            if(tem>1000000)    cout<<tem<<endl;
            pq.pop();
            if(tem <= 429496729){
                pq.push(2*tem); pq.push(3*tem); pq.push(5*tem);
            }else if(tem <= 715827882){
                pq.push(2*tem); pq.push(3*tem);
            }else if(tem < 1073741824){
                pq.push(2*tem);
            }
            
            i++;
        }
        while(tem == pq.top())  pq.pop();
        return pq.top(); 
    }
};