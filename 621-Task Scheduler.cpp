class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> no;
        int mx = 0;
        for(auto e : tasks)
        {
            no[e]++;
            mx = max(mx, no[e]);
        }
        
        int ans = (mx-1)*(n+1);
        for(auto e : no) if(e.second == mx) ans++;
        return max((int)tasks.size(), ans);
    }
};