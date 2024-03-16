class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        a = 0
        c = 0
        s = {}
        s[0] = -1
        for i, num in enumerate(nums):
            if num: c += 1
            else: c -= 1
            if c in s:
                a = max([a, i - s[c]])
            else:
                s[c] = i
        return a