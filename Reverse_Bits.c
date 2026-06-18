int reverseBits(int n) {
    int val[32],i=0;
    while(n!=0)
    {
        val[i]=n%2;
        n=n/2;
        i++;
    }
    for(i=31;i>0;i--)
    {
        n+=val[i]*pow(2,31-i);
    }
    return n;
}
