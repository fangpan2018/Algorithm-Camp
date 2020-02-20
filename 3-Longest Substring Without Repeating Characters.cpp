// faster than 60.66%
// less than 58.71% 


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charMap;
        int mxl = 0, start = -1;
        
        for(int i=0; i<s.size(); i++){
            if(charMap.find(s[i])!=charMap.end() && charMap[s[i]]>start)    start = charMap[s[i]];
            charMap[s[i]] = i;
            mxl = max(mxl, i-start);
        }
        return mxl;
    }
};