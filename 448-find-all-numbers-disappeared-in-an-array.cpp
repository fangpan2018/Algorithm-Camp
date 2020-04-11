class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> hash;
        vector<int> re;
        for(auto i:nums){
            hash.insert(i);
        }

        for(int i=1; i<=nums.size(); i++){
            if(hash.find(i)==hash.end()){
                re.push_back(i);
            }
        }
        return re;
    }
};