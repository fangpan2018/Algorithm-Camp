class Solution {
public:
    double Power(double base, int exponent) {
        double ret = 1;
        if(exponent>0){
            while(exponent>0){
                ret *= base;
                exponent--;
            }
        }else if(exponent<0){
            exponent = - exponent;
            while(exponent>0){
                ret *= base;
                exponent--;
            }
            ret = 1/ret;
        }
        return ret;
    }
};