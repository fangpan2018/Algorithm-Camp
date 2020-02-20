class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()>0){
            int i = 0;
            for(int j=0; j<nums.size(); j++){
                if (nums[j]!=val) nums[i++]=nums[j];
            }
            return i;
        }
        return 0;
    }
};




// faster than 100.00% 
// less than 95.59%

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=0;
        for(;j<nums.size();j++){
            if(nums[j]==val)    continue;
            else    nums[i++]=nums[j];
        }
        return i;
    }
};