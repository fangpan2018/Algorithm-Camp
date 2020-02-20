// faster than 94.79% 
// less than 90.32%

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        if(strs.size() == 0) return pref;
        for(int i = 0; i < strs[0].size(); i++){
            for(int j=1; j < strs.size(); j++){
                if(i == strs[j].size() || strs[0][i] != strs[j][i]) return pref;
            }
            pref += strs[0][i];
        }
        return pref;
    }
};