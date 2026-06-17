/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int count=0,x=0;
    // int *ans=(int*)malloc(numsSize*sizeof(int));
    int *temp=(int*)malloc(numsSize*sizeof(int));
    // ans=nums;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            nums[i]*=2;
            nums[i+1]=0;
        }
    }
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        // for( j=0;j<numsSize;j++)
        // {
            if(nums[i]!=0)        
            {
                temp[j]=nums[i];
                j++;
                // break;
            }
        // }
        // else if(ans[i]==0)count++;
        x=j;
    }
    for(int i=x;i<numsSize;i++)
    {
        temp[i]=0;
    }
    return temp;
}
