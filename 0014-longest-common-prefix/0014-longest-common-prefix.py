class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        for i in range(len(strs[0])):
            for strings in strs[1:]:
                if len(strings)<=i or strings[i]!=strs[0][i]:
                    return strs[0][:i]
        
        return strs[0]



        