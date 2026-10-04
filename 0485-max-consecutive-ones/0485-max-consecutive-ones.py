class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        current=0
        maximum=0
        for i in range (len(nums)):
            if nums[i]==1:
                current+=1
                maximum=max(maximum,current)
            else:
                current=0
        return maximum
        