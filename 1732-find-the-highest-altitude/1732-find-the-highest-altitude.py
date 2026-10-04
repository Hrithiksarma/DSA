class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        altitude=0
        maximum=0
        for num in gain:
            altitude+=num
            maximum=max(maximum,altitude)
        return maximum