class Solution:
    def conversion(self,num):
        val=[]
        while(num!=0):
            rem=num%10
            val.append(rem)
            num//=10
        return val[::-1]
    def generate(self, numRows: int) -> List[List[int]]:
        # if numRows==1:
        #     return [[1]]
        # else:
        # sol=[]
        # for i in range (numRows):
        #     ans=pow(11,i)
        #         sol.append(self.conversion(ans))
        # return sol
        sol=[]
        for i in range(numRows):
            row=[1]*(i+1)
            for j in range(1,i):
                row[j]=sol[i-1][j-1]+sol[i-1][j]
            sol.append(row)
        return sol
