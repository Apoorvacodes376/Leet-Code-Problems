int mirrorDistance(int n) {
    int rev=0,num=n,x=1;
    while(num!=0)
    {
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return abs(rev-n);
}
