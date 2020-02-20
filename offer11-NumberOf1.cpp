// 注意边界条件

class Solution {
public:
     int  NumberOf1(int n) {
         if(n == -2147483648) return 1;
         if(n>=0){
             int ret = 0;
             while(n>0){
                 ret += n%2;
                 n = n/2;
             }
             return ret;
         }else{
             n = n + 2147483648;
             int ret = 0;
             while(n>0){
                 ret += n%2;
                 n = n/2;
             }
             return ret+1;
         }
         
     }
};