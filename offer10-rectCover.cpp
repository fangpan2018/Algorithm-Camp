class Solution {
public:
    int rectCover(int number) {
        if(number==1||number==2)    return number;
        int r1 = 1, r2 = 2, r3;
        for(int i=3; i<=number; i++){
            r3 = r1 + r2;
            r1 = r2;
            r2 = r3;
        }
        return r3;
    }
};