// faster than 100.00% 
// less than 100.00%

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(needle.size()>haystack.size()) return -1;
        int j=0;
        for(int i=0; i<= haystack.size()-needle.size(); i++){
            for(; j<needle.size(); j++){
                if(haystack[i+j]!=needle[j])    break;
            }
            if(j == needle.size())  return i;
            j=0;
        }
        return -1;
    }
};