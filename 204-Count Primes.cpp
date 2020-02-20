// faster than 5.02% 
// less than 91.67%

class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        if(n<4) return 1;
        if(n<5) return 2;
        int i = 5, c = 2;
        while(i < n){
            if(isPrime(i))  c++;
            i++;
        }
        return c;
    }
    bool isPrime(int n){
        int i = 2;
        while(i <= sqrt(n)){
            if(n%i==0) return false;
            i++;
        }
        return true;
    }
};