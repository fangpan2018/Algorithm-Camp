// faster than 68.38%
// less than 100.00%


class Solution {
public:
    int reverse(int x) {
        int s = 1;
        int ret=0;
        
        while(x){
            if((ret>pow(2,31)/10) || (ret < (-pow(2,31)/10)))   return 0;
            ret = ret*10 + x%10;
            x = x/10;
        }
        return ret;
    }
};