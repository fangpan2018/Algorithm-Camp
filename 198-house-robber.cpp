// 
// 打家劫舍1
// 主要是找出前n个最大和n+1个最大的关系。
// 
class Solution {
public:
    int rob(vector<int>& nums) { //检查空的情况。
        if(nums.size()<1){
            return 0;
        }else if(nums.size()==1){ // 检查只有一个的情况。
            return nums[0];
        }
        vector<int> re;
        re.push_back(nums[0]);
        re.push_back(nums[0]>nums[1]?nums[0]:nums[1]);
        for(int i=2; i<nums.size(); i++){
            int max = (re[i-1])>(re[i-2]+nums[i])?(re[i-1]):(re[i-2]+nums[i]); //重点
            re.push_back(max);
        }
        return re[nums.size()-1];
    }
};