class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int len = rotateArray.size();
        int head = 0, end = len - 1;
        int mid = (len - 1)/2;
        while(head<end){
            if(rotateArray[head]<rotateArray[mid]){
                head = mid + 1;
            }else if(rotateArray[head]==rotateArray[mid]){
                head++;
            }else{
                end = mid;
            }
            mid = (head + end)/2;
        }
        return rotateArray[head];
    }
};