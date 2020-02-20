// faster than 84.70% 
// less than 93.48%


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m+n-1; i>n-1; i--){
            nums1[i] = nums1[i-n];
        }
        int i = 0, i1 = n, i2 = 0;
        while(i1<m+n&&i2<n){
            if(nums1[i1]<=nums2[i2]){
                nums1[i++] = nums1[i1++];
            }else{
                nums1[i++] = nums2[i2++];
            }
        }
        if(i1 ==m+n){
            while(i<m+n)    nums1[i++] = nums2[i2++];
        }else{
            while(i<m+n)    nums1[i++] = nums1[i1++];
        }
    }
};
