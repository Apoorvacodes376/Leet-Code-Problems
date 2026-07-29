bool checkPerfectNumber(int num) {
    // long long sum=1,arr[1000],j=0;
    long long sum=1;
    for(long long i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            // arr[j]=i;
            // j++;
            sum+=i;
            if(i!=num/i)
            {
                sum+=num/i;
            }
        }
    }
    // for(long long k=0;k<j;k++)
    // {
    // }
    if(num==1) return false;
    if(sum==num)return true;
    return false;
}
