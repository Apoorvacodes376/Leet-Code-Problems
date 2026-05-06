bool isPowerOfThree(int n) {
    // n=abs(n);
    // for(int i=0;i<n/3;i++)
    // {
    //     n=n%3;
    // }
    // if(n!=3||n!=0) return false;
    // if(n==0)return false;
    // while(n>=0)
    // {
    //     n=n%3;
    // }
    // if(n!=0||n>=3)return true;
    // // if(n<3)
    // return false;

    // int sum=0;
    // int x=0,rev=0;
    // while(n>0)
    // {
    //     x=n%10;
    //     // sum+=x;
    //     rev=rev*10+x;
    //     x/=10;
    // }
    // int y=sum%3;
    // if(y!=0)
    // {
    //     return false;
    // }
    // return true;
    // int reversed = 0, remainder, original;


    // original = n;
    // int sum=0;
    // if(n==0)return false;
    if (n==1) return true;

    if(n%3!=0||n==0) return false;
    // while (n!= 0) 
    // {
    //     remainder = n % 10;
    //     sum+=remainder;
    //     n /= 10;
    // }

    while (n!= 0) 
    {
        n = n / 3;
        // sum+=remainder;
        // n /= 10;
        if (n%3!=0)break;
    }
    if (n%3==0||n==1)return true;
    return false;
    // if (sum%3!=0&&sum%9!=0) return false;
    // if(n%5==0) return false;
    // return true;
}
