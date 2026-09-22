class Solution {
    int check(int x)
    {
        int sum=0;
        while(x!=0)
        {
            int rem=x%10;
            sum+=rem;
            x/=10;
        }
        return sum;
    }
    public int largestInteger(int n, int s) {
        if(s>n*9)return -1;
        int val=0;
        int i=0;
        int x=1;
        for(int j=0;j<n;j++)
        {
            x*=10;
        }
        while(i<x)
        {
            if(check(i)<=s)
            {
                val=i;
            }
            i++;
        }
        return val;
    }
}
