class Solution {
public:
    int Fibonacci(int n) {
        if(n>2){
            return(Fibonacci(n-1)+Fibonacci(n-2));
        }else if(n>0){
            return 1;
        }else{
            return 0;
        }
    }
};