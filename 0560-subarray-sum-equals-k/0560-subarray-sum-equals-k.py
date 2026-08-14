class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        m={0:1}
        current_sum=0
        count=0
        for i in range(len(nums)):
            current_sum=current_sum+nums[i]
            if current_sum-k in m :
                count+=m[current_sum-k]
            
            if current_sum in m:
                m[current_sum]+=1
            else:
                m[current_sum]=1
        return count




           

        