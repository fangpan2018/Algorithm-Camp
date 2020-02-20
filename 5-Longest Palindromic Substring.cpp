// faster than 87.71%
// less than 89.65%

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;
        int start = 0, max_len = 1;
        for(int i =0; i < s.size(); i++){
            int j = i, k = i;
            if(s.size()-i <= max_len/2) break;
            while(k < s.size()-1 && s[i]==s[k+1]) k++;
            while(k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { 
                ++k; 
                --j; 
            }
            int new_len = k - j + 1;
            if (new_len > max_len) { 
                start = j; 
                max_len = new_len;
            }
        }
        return s.substr(start, max_len);
    }
};