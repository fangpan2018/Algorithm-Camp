// 
// 
// 先数数，后比较。
// 
// 

class Solution {
public:
    unordered_map<int, int> re;
    int majorityElement(vector<int>& nums) {
        count(nums);
        pair <int, int> res(0,0);
        for(auto i:re){
            if(i.second>res.second){
                res = i;
                // cout<<res.first<<res.second<<endl;
            }
        }
        return res.first;

    }

    void count(vector<int>& nums){
        for(int i:nums){
            if(re.find(i)!=re.end()){
                re[i]++;
            }else{
                re[i]=1;
            }
        }
    }
};
