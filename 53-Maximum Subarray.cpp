// faster than 71.99%
// less than 100.00% 


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)   return nums[0];
        int min=0, max=0,sum=0, re = nums[0];
        int i = 0;
        while(i < nums.size()){
            sum += nums[i];
            if(sum<min) {
                min = sum;  
                max = sum;
            }
            else if(sum>max){    
                max = sum;
                if(max - min>re)  re = max -min;
            }
            if(re<nums[i]) re = nums[i];
            i++;
        }
        return re;
    }
};
// 
// 动态规划的做法。
// 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = nums.size(), maxsum = nums[0];
        for(int i=1; i<l; i++){
            if(nums[i-1]>0) nums[i] += nums[i-1];
            maxsum = max(maxsum, nums[i]);
        }
        return maxsum;
    }
};