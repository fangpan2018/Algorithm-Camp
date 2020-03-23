// 给一个array，从中找某个value是否存在或者它的的index，应该建一个hash table。
// 这样找value的时间复杂的就变成1，直接遍历array的时间复杂度是n。

// 15题 3sum， 18题 4sum。


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i = 0;
//         unordered_map<int, int> hash;
//         vector<int> re;
//         int tofind;
//         while(i<nums.size()){
//             tofind = target - nums[i];

//             if(hash.find(tofind) != hash.end()){
//                 re.push_back(hash[tofind]);
//                 re.push_back(i);
//                 return re;
//             }

//             hash[nums[i]] = i;
//             i++;
//         }
//         return re;
//     }
// };
// unorder_map::find() 返回值为iterator。 
// 


// O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
                int tofind = target - nums[i];

                if(hash.find(tofind) != hash.end()){
                    res.push_back(hash[tofind]);
                    res.push_back(i);
                    return res;
                }
                hash[nums[i]] = i;
        }
        return res;
    }
};