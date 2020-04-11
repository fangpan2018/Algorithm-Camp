class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        imax = 1
        imin = 1
        re = nums[0]
        for i in nums:
            if i>0:
                imax = max(imax*i, i)
                imin = min(imin*i, i)
                re = max(imax, re)
            else:
                imax, imin = imin, imax
                imax = max(imax*i, i)
                imin = min(imin*i, i)
                re = max(imax, re)
        return re