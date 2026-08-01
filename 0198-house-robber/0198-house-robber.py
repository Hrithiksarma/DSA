class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[]
        n=len(nums)
        if n==1:
            return nums[0]
        else:
            dp.append(nums[0])
            dp.append(max(nums[0],nums[1]))
            for i in range(2,n):
                dp.append(max(nums[i]+dp[i-2],dp[i-1]))

        return dp[n-1]