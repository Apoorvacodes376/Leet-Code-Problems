long long sumAndMultiply(int n) {
    long long l=0,rem=0,sum=0,x=1,n1=n,num=0;
    while(n1!=0)
    {
        rem=n1%10;
        sum+=rem;
        n1/=10;
        l++;
    }
    for(long long i=0;i<l;i++)
    {
        rem=n%10;
        if(rem!=0)
        {
            num=num+(x*rem);
            x*=10;
        }
        n/=10;
    }
    return num*sum;
}Concatenate Non-Zero Digits and Multiply by Sum I
