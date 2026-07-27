int cmp(const void *a,const void *b)
{
    return (*(int*)b - *(int*)a);
}
int maxProduct(int* nums, int numsSize) {
    // for(int i=0;i<numsSize;i++)
    // {
    //     for(int j=0;j<numsSize-1;j++)
    //     {
    //         if(nums[j]<nums[j+1])
    //         {
    //             int temp=nums[j];
    //             nums[j]=nums[j+1];
    //             nums[j+1]=temp;
    //         }
    //     }
    // }
    qsort(nums,numsSize,sizeof(int),cmp);
    int pro=(nums[0]-1)*(nums[1]-1);
    return pro;
}
