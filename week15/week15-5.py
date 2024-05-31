# week15-5.py LeetCode 1208
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s)
        j = 0
        for i in range(N):  # 先用 python 把字串的迴圈寫出來
            maxCost -= abs( ord(s[i]) - ord(t[i]))
            while maxCost < 0:
                maxCost += abs( ord(s[j]) - ord(t[j]))
                j += 1
            ans = max(ans, i-j+1)
        return ans
