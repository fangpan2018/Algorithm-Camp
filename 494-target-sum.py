class Solution:
    def findTargetSumWays(self, nums: List[int], S: int) -> int:
        sum_ = sum(nums)
        l = len(nums)
        ls = [[0]*(2*sum_+1) for i in range(l)]
        ls[0][sum_+nums[0]] += 1
        ls[0][sum_-nums[0]] += 1

        for i in range(1, l):
            for n in range(2*sum_+1):
                if(ls[i-1][n]):
                    ls[i][n+nums[i]] += ls[i-1][n]
                    ls[i][n-nums[i]] += ls[i-1][n]
        # print(ls)
        if(S>sum_):
            return 0
        else:
            return ls[l-1][S+sum_]