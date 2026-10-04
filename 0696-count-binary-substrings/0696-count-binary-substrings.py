class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        prev_count=0
        curr_count=1
        total_count=0
        for i in range (1,len(s)):
            if s[i]!=s[i-1]:
                total_count+=min(curr_count,prev_count)
                prev_count=curr_count
                curr_count=0
            curr_count+=1
        total_count+=min(curr_count,prev_count)
        return total_count


        