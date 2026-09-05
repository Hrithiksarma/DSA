class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        mp={0:-1}
        maxSum=0
        currentSum=0

        for index,number in enumerate(nums):
            if number==1:
                currentSum+=1
            else:
                currentSum-=1
            
            if currentSum in mp:
                maxSum=max(maxSum,index-mp[currentSum])
            else:
                mp[currentSum]=index

        return maxSum
        