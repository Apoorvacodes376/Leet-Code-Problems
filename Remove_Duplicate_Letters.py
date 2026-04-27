class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        # x=len(s)
        # for i in range (x):
        #     for j in range (x-1):
        #         if s[i]==s[j]:
        #             for k in range (x-1-1):
        #                 s[k]=s[k+1]
        # s=sort(s)
        # return s
       
        if not s:
            return ""

        pos = 0

        for i in range(len(s)):
            if s[i] < s[pos]:
                pos = i
            if s[i] not in s[i+1:]:
                break

        first = s[pos]
        remaining = s[pos+1:].replace(first, "")

        return first + self.removeDuplicateLetters(remaining)
