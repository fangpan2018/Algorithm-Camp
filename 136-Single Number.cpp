// aster than 67.11% 
// less than 100.00%

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for (int i = 0; i < nums.size(); ++i) {
            num ^= nums[i];
        }
        return num;
    }
};



// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int zero = 0;
//         for(int i:nums){
//             zero ^= i;
//         }
//         return zero;
//     }
// };