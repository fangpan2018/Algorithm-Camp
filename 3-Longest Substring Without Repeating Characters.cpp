// faster than 60.66%
// less than 58.71% 
// 
// 
// 需要一个unordered_map作为hash去找，某个字母在子序列中的位置。
// 
// 
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


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int l = s.length();
//         if(l<2){return l;}
//         else{
//             unordered_map<char, int> hash;
//             int i = 0, j = 0;
//             int re = 1;
//             hash[s[0]] = 0;
//             // cout<<hash['p']<<endl;
//             while(j<l-1&&i<=j){
//                 if(hash.find(s[++j])!=hash.end()){
//                     i = i>hash[s[j]]+1?i:hash[s[j]]+1;
//                     // cout<<"s[j]= "<<s[j]<<endl;
//                     // cout<<"i= "<<i<<endl;
//                     // cout<<"j= "<<j<<endl;
//                 }
//                 hash[s[j]] = j;
//                 re = re>j-i+1?re:j-i+1;
//                 cout<<"re= "<<re<<endl;
//             }
//             return re;
//         }
//     }
// };