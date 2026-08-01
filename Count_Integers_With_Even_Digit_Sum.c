bool even(int x)
{
    int sum=0;
    while(x!=0)
    {
        int rem=x%10;
        sum+=rem;
        x/=10;
    }
    if(sum%2==0)return true;
    return false;
}
int countEven(int num) {
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(even(i))count++;
    }
    return count;
}
