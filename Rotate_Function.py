class Solution(object):
    def maxRotateFunction(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # n=nums.length()
        n=len(nums)
        arr=[]
        total_sum = sum(nums)
        f = 0
        for i in range(n):
            f += i * nums[i]
        res = f
        
        for k in range(1, n):
            f = f + total_sum - n * nums[n-k]
            res = max(res, f)
        # sum=0
        # for j in range(n):
        #     sum+=j*rotated[j]
        # sum=sum
        # for i in range(n):
        #     rotated = nums[-i:] + nums[:-i]    
            # arr.append(sum)
            # sum=0
        return res
