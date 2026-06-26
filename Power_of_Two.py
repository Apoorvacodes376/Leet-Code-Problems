class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        res=0
        i=0
        while res<=n:
            res=pow(2,i)
            i+=1
            if(res==n):
                return True

        return False
