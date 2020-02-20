// faster than 93.86% 
// less than 100.00%

// 先对角线找到大概位置，再在两边做Z形查找。
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if((size(matrix)==0)||(size(matrix[0])==0)) return false;
        int a = size(matrix), b = size(matrix[0]);
        
        if(target < matrix[0][0] | target > matrix[a-1][b-1]){
            return false;
        }
        int a_ = 0, b_ = 0, i = 0;
        while(i<a && i<b){
            if(matrix[i][i]==target)    return true;
            if(matrix[i][i]>target)     break;
            i++;
        }
        a_ = i-1; b_ = i;
        while(a_>=0 && b_<b){
            if(matrix[a_][b_] == target)    return true;
            if(matrix[a_][b_] > target){
                a_--;
            }else{
                b_++;
            }
        }
        a_ = i; b_ = i-1;
        while(a_<a & b_>=0){
            if(matrix[a_][b_] == target)    return true;
            if(matrix[a_][b_] > target){
                b_--;
            }else{
                a_++;
            }
        }
        return false;
    }
};