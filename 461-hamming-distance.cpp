// 执行用时 :0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗 :7.6 MB, 在所有 C++ 提交中击败了100.00%的用户

class Solution {
public:
    int hammingDistance(int x, int y) {
        return countone(x^y);
    }

    int countone(int x){
        int i = 0;
        while(x>0){
            i += x%2;
            x /= 2; 
        }
        return i;
    }
};
