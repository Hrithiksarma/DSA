from collections import Counter
class Solution:
    def frequencySort(self, s: str) -> str:
        result=""

        mp=Counter(s)

        sorted_chars=sorted(mp.keys(),key=lambda x:mp[x],reverse=True)
        for char in sorted_chars:
            result+=char*mp[char]
        return result


        
        