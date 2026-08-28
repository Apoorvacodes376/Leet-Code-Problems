int alternateDigitSum(int n) {
    int sum=0,num=n,count=0,arr[10];
    while(num!=0)
    {
        int rem=num%10;
        // count++;
        arr[count++]=rem;
        num/=10;
    }
    for(int i=0;i<count;i++)
    {
        if(i%2==0)sum+=arr[i];
        else sum-=arr[i];
    }
    if(count%2==0)sum=-sum;
    return sum;
}
