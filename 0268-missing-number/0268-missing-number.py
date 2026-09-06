class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        computed=0
        n = len(nums)
        sumation=n*(n+1)//2
        for i in range(0,len(nums)):
            computed+=nums[i]
        left=sumation-computed
        return left
        