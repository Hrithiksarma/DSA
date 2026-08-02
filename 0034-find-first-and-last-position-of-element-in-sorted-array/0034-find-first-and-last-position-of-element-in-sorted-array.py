class Solution(object):
    def searchRange(self, nums, target):
        left=self.searchindex(nums,target,True)
        right=self.searchindex(nums,target,False)
        return[left,right]

        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
    def searchindex(self,nums,target,dir):
        left=0
        right=len(nums)-1
        result=-1
        while left<=right:
            mid=left+(right-left)//2
            if nums[mid]==target:
                result=mid
                if dir==True:
                    right=mid-1
                else:
                    left=mid+1
            elif nums[mid]<target:
                left=mid+1
            else:
                right=mid-1
        return result
