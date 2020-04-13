# 执行用时 :40 ms, 在所有 Python3 提交中击败了75.03%的用户
# 内存消耗 :13.9 MB, 在所有 Python3 提交中击败了5.45%的用户

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        l = len(nums)
        if l==0:
            return -1
        b = nums[0]
        if l==1:
            return 0 if b==target else -1
        if l>1:
            if(b==target):
                return 0
            elif(b>target):
                for i in range(l-1,0,-1):
                    if(nums[i]==target):
                        return i
                    elif(nums[i]<target or nums[i]<nums[i-1]):
                        return -1
            elif(b<target):
                for i in range(1, l):
                    if(nums[i]==target):
                        return i
                    elif(nums[i]>target or nums[i]<nums[i-1]):
                        return -1
        return -1
