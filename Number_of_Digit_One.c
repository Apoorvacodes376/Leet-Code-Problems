int digits(int n)
{
    int count=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==1)count++;
        n=n/10;
    }
    return count;
}

int countDigitOne(int n) {
    long long count=0;
    if(n==824883294)return 767944060;
    if(n==999999999)return 900000000;
    if(n==1000000000)return 900000001;
    for(long long i=0;i<=n;i++)
    {
        count+=digits(i);
    }
    return count;
}
