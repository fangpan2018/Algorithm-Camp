// faster than 60.65%
// less than 67.19%

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        
        while(i<nums.size()){
            if(nums[i] >= target)    break;
            i++;
        }
        return i;
    }
};

// faster than 98.66% 
// less than 100.00% 


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums.back()) return nums.size();
        
        int i =0;
        
        while(i<nums.size()){
            if(nums[i] >= target)    break;
            i++;
        }
        return i;
    }
};

