// 返回的方式, 可以看下vector的实现方式




class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()>1){
            int i = 1;
            while(i<nums.size()){
                if(nums[i-1]==nums[i]){
                    nums.erase(nums.begin()+i);
                }else{
                    i++;
                }
            }
            return i;
        }else{
            return nums.size();
        }
    }
};


O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()>1){
            int i = 0;
            for(int j=1; j<nums.size();j++){
                if(nums[j]==nums[i]) continue;
                else nums[++i]=nums[j];
            }
            return ++i;
        }else return nums.size();
    }
};