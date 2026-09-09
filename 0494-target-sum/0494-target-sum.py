class Solution:
   
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        freq={}
        def backtrack(i,current_sum):
            if (i,current_sum) in freq:
                return freq[(i,current_sum)]
            if i==len(nums):
                if current_sum==target:
                    return 1 
                else:
                    return 0
            add=backtrack(i+1,current_sum+nums[i])
            substract=backtrack(i+1,current_sum-nums[i])
            freq[(i,current_sum)]=add+substract
            return freq[(i,current_sum)]
        return backtrack(0,0)    


    