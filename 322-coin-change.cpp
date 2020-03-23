// 
// 
// 动态规划，自后向前，递归。
// 用vector，做存储，减小重复计算。
// 
// 
class Solution {
public:
    vector<int> count;
    int coinChange(vector<int>& coins, int amount) {
        count.resize(amount+1);
        return dp(coins, amount);
    }


    int dp(vector<int>& coins, int amount){
        // cout<<"dp"<<endl;
        if(amount==0)    return 0;
        if(amount<0)    return -1;
        if(count[amount]!=0)    return count[amount];
        int MIN = INT_MAX;
        for(int i:coins){
            int re = dp(coins, amount-i);
            if(re>=0){
                MIN = min(MIN, re+1);
            }
        }
        count[amount]= MIN==INT_MAX?-1:MIN;
        return count[amount];
    }
};