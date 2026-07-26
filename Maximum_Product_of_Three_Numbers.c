int cmp(const void* a,const void* b)
{
    return(*(int*)a -*(int*)b);
}
int maximumProduct(int* nums, int numsSize) {
    // for(long long i=0;i<numsSize;i++)
    // {
    //     for(long long j=0;j<numsSize-1;j++)
    //     {
    //         if(nums[j]>nums[j+1])
    //         {
    //             long long temp=nums[j];
    //             nums[j]=nums[j+1];
    //             nums[j+1]=temp;
    //         }
    //     }
    // }
    qsort(nums,numsSize,sizeof(int),cmp);
    long long p1=nums[0]*nums[1]*nums[numsSize-1];
    long long p2=nums[numsSize-1]*nums[numsSize-2]*nums[numsSize-3];
    return (p1>p2)?p1:p2;
}
