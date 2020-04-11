class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
       for(int i=0; i<nums.size()-n;i++){
           if(nums[i]==0){
               nums.erase(nums.begin()+i);
               nums.push_back(0);
               n++;
               i--;
           }
       } 
    }
};