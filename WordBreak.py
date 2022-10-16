class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        
        f = [False for i in range(len(s) + 1)]
        f[0] = True
        
        for i in range(len(s)):
            for j in range(i, len(s)):
                if f[i] and s[i:j + 1] in wordDict:
                    f[j + 1] = True

        return f[len(s)]
