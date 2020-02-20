// faster than 100.00% 
// less than 58.33%
//掌握规律 奇变偶不变。
class Solution {
public:
    int kthGrammar(int N, int K) {
        if(K==1) return 0;
        int i = 0;
        int n = 0;
        while(K>1){
            n = ceil(log2(K));
            K = pow(2, n) - K + 1;
            if(n%2) i++;
        }
        return i%2;
        
    }
};