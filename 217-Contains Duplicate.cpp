// faster than 86.73% 
// less than 39.56% 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int i:nums){
            if(hash.find(i)==hash.end()) hash[i]=1;
            else return true;
        }
        return false;
    }
};