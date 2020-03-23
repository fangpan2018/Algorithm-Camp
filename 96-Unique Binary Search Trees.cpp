// faster than 100.00% 
// less than 59.09%

class Solution {
public:
    int numTrees(int n) {
        if(n<=1) return 1;
        int re[n+1];
        re[0] = 1;
        re[1] = 1;
        for(int i=2; i<=n; i++){
            re[i] = 0;
            for(int j=1; j<=i; j++){
                re[i] += re[j-1] * re[i-j];
            }
        }
        return re[n];
    }
};
// 使用动规
// 
// 1，2，（3），4，5
// 
// 
// class Solution {
// public:
//     int numTrees(int n) {
//         unordered_map<int, int> hash;
//         hash[0] = 1;
//         hash[1] = 1;
//         int re = 0;

//         for(int i=2; i<=n; i++){
//             for(int j=0; j<i; j++){
//                 re += hash[j]*hash[i-1-j];  
//             }
//             hash[i] = re;
//             re =0;
//         }
//         return hash[n];
//     }
// };