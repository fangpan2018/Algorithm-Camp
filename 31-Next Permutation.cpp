class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        unordered_map<int, int> hash;
        int i = nums.size()-2;
        hash[nums[i+1]]=i+1;
        for(; i>=0; i--){
            if(nums[i]<nums[i+1]){
                int x=1;
                int c = nums[i];
                while(x<=nums[i+1]-nums[i]){
                    if(hash.find(nums[i]+x) != hash.end()){
                        nums[i] = nums[i]+x;
                        nums[hash[nums[i]+x]] = c;
                        return;
                    }
                    x++;
                }
            }else{
                hash[nums[i]] = i;
            }
        }
        if(i==-1){reverse(nums.begin(), nums.end()); return;}
        
    }
};