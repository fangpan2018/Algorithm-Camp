class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        re = [[]]

        for num in nums:
            re += [i + [num]for i in re]

        return re