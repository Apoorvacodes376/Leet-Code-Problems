class Solution(object):
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m=max(nums)
        x=0
        count=0
        for i in nums:
            if i*2>m and i!=m:
                return -1
            if i==m:
                count=x
            x+=1
        return count
