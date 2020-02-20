
// n**2
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()<2) return true;
        for(int i=0; i<s.size()-1; i++){
            for(int j=i+1; j<s.size(); j++){
                if((s[i]==s[j])!=(t[i]==t[j])) return false;
            }
        }
        return true;
    }
};

// n

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> ss, tt;
        for(int i=0; i<s.size(); i++){
            if(ss[s[i]] != tt[t[i]]) return false;
            ss[s[i]] = tt[t[i]] = i+1;
        }
        return true;
    }
};