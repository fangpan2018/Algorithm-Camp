// faster than 85.94% 
// less than 70.59% 


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++){
            if(hash[nums[i]]==0)  hash[nums[i]]=i+1;
            else{
                if(i-hash[nums[i]] <= k-1)  return true;
                hash[nums[i]]=i+1;
            }
        }
        return false;
    }
};