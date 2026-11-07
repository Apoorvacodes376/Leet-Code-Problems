class Solution {
    int fib(int n)
    {
        int f1=0,f2=1;
        for(int i=0;i<n;i++)
        {
            int temp=f1+f2;
            f1=f2;
            f2=temp;
        }
        return f1;
    }
    public boolean threeFibonacciSum(int n) {
        // int tot=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(fib(i)<n)
        //     {
        //         tot+=fib(i);
        //         if(tot==n)return true;
        //     }
        // }
        // return false;
        int f1 = 0, f2 = 1;

        while (true) {
            int f3 = f1 + f2;

            if (f1 + f2 + f3 == n)
                return true;

            if (f1 + f2 + f3 > n)
                return false;

            f1 = f2;
            f2 = f3;
        }
    }
}
