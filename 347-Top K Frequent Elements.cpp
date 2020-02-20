
// faster than 95.48% 
// less than 96.77%

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        using mapIter = unordered_map<int, size_t>::iterator;
        unordered_map<int,size_t> freqCount; 
        priority_queue<mapIter, vector<mapIter>, function<bool(mapIter, mapIter)>> topkHeap(
            [](mapIter lhs, mapIter rhs)
            {
                return lhs->second > rhs->second; 
            },
            vector<mapIter>()
        ); 
        for(mapIter iter = freqCount.begin(); iter != freqCount.end(); ++iter)
        {
            topkHeap.push(iter);
            if(topkHeap.size() > k){ topkHeap.pop(); } 
        }
        vector<int> result(k);
        for(int i = k-1; i >= 0; --i)
        {
            mapIter iter = topkHeap.top();
            result[i] = iter->first;
            topkHeap.pop();
        }
        return result;
    }
};