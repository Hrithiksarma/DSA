class Solution:
    def reverseWords(self, s: str) -> str:
        words=s.split()
        words.reverse()
        reversed_words=" ".join(words)
        return reversed_words
        