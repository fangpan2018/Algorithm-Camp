class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        //sorting nums for avoid repeating
        sort(nums.begin(),nums.end());
        
        int i =0;
        while(i<nums.size()){
            int i0 = i+1;
            int i1 = nums.size()-1;
            while(i0<i1){
                int sum = nums[i0]+nums[i1];
                if(sum<-nums[i])    i0++;
                else if(sum>-nums[i])   i1--;
                else{
                    vector<int> res_(3);
                    res_[0]=(nums[i]);
                    res_[1]=(nums[i0]);
                    res_[2]=(nums[i1]);
                    res.push_back(res_);
                    while(i0<i1 && nums[i0]==res_[1]) i0++;
                    while(i0<i1 && nums[i1]==res_[2]) i1--;
                }
                
            }
            
            while(i+1<nums.size() && nums[i]==nums[i+1])   i++;
            i++;
        }
        return res;
    }
};