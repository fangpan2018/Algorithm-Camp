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