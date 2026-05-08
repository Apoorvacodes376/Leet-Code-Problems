double myPow(double x, int n) {
    double y=1.0;
    long long n1=n;
    // if(x==1)
    // {
    //     return 1;
    // }
    // else if(x==-1)
    // {
    //     if(n%2==0) return 1;
    //     else return 0;
    // }
    
    
    if(n1<0)
    {
        // x=1/x;
        // for(int i=n;i<0;i++)
        // {
        //     y=x*y;
        // }
        // x=1/x;

        // while(n1<0)
        // {
        //     if(n1%2==1)
        //     {
        //         y*=x;
        //     }
        //     x*=x;
        //     n1/=2;
        // }
        x = 1 / x;
        n1 = -n1;
    }
    // int i=0;
    // while(i>n)
    // {
    //     y=x*y;
    //     i--;
    // }
    if(n1>=0)
    {
        while(n1>0)
        {
            if(n1%2==1)
            {
                y*=x;
            }
            x*=x;
            n1/=2;
        }
    }
    return y;
}
