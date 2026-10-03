class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        prev_run=0
        curr_run=1
        total_count=0
        for i in range(1,len(s)):
            if s[i-1]==s[i]:
                curr_run+=1
            else:
                total_count+=min(prev_run,curr_run)
                prev_run=curr_run
                curr_run=1
        total_count+=min(prev_run,curr_run)
        return total_count

        
        