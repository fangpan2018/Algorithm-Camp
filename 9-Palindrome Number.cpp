// faster than 72.93% 
// less than 78.18%

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        int y = 0, x_ = x;
        while(x_ > 0){
            if(y > (INT_MAX / 10)) return false;
            y = y*10 + x_%10;
            x_ = x_ / 10;
        }
        if(x == y)  return true;
        else return false;
    }
};