class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words=s.split()  #Hello world ["Hello",World"]
        length=len(words)
        particular_word=words[length-1]
        return len(particular_word)
        