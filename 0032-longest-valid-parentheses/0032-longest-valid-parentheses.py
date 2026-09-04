class Solution:
    def longestValidParentheses(self, s: str) -> int:
        max_result=0
        right,left=0,0
        for char in s:
            if char=='(':
                left+=1
            else:
                right+=1

            if left==right:
                max_result=max(max_result,2*right)
            elif right>left:
                left,right=0,0
        
        right,left=0,0
        for char in reversed(s):
            if char=='(':
                left+=1
            else:
                right+=1
            if left==right:
                max_result=max(max_result,2*right)
            elif left>right:
                left,right=0,0

        return max_result

        