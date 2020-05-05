# dp中存的是以i为结尾时的升序子序列的长度。


class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        le = len(nums)
        if(le<2): return le
        dp = []
        for i in range(len(nums)):
            dp.append(1)
            for j in range(i):
                if(nums[i]>nums[j]):
                    dp[i] = max(dp[i], dp[j]+1)
        return max(dp)