bool check(int n,int x)
{
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(sum==x)return true;
    return false;
}
int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        if(check(nums[i],i))return i;
    }
    return -1;
}
