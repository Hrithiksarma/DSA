class Solution:
    def find_length(self,s,left,right):
        while left>=0 and right<len(s) and s[left]==s[right]:
            left-=1
            right+=1
        return right-left-1



    def longestPalindrome(self, s: str) -> str:
        max_length=0
        start=0
        end=0
        for i in range(len(s)):
            len1=self.find_length(s,i,i)
            len2=self.find_length(s,i,i+1)
            max_length=max(len1,len2)
            if max_length > end-start:
                start=i-(max_length-1)//2
                end=i+max_length//2
        return s [start:end+1]

        