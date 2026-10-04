class Solution:
    def firstMissingPositive(self, nums: list[int]) -> int:
        n=len(nums)
        for i in range(len(nums)):
            while nums[i]>0 and 0<=nums[i]<=len(nums) and nums[i]!=nums[nums[i]-1]:
                place=nums[i]-1
                nums[i],nums[place]=nums[place],nums[i]
        
        for i in range(len(nums)):
            if nums[i]!=i+1:
                return i+1      

        return n+1
        