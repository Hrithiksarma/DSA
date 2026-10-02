class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        m_l=0
        m={}
        l=0
        for r in range(len(s)):
            c=s[r]
            if c in m:
                l=max(l,m[c]+1)
            m[c]=r
            m_l=max(m_l,r-l+1)
        return m_l




        