int gcd(int x,int y)
{
    while(y!=0)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}
int findGCD(int* nums, int numsSize) {
    int min=INT_MAX, max=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<min)
        {
            min=nums[i];
        }
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    return gcd(min,max);
}
