class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left=0
        ls=0
        d={}
        n=len(s)
        for right in range(0,n):
            ch=s[right]
            if ch in d and  d[ch]>=left:
                left=d[ch]+1
            d[ch]=right
            ls=max(ls,right-left+1)
        return ls 



        