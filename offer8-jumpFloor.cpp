class Solution {
public:
    int jumpFloor(int number) {
        if(number>2){
            return(jumpFloor(number-1)+jumpFloor(number-2));
        }else if(number==2){
            return 2;
        }else{
            return 1;
        }
    }
};