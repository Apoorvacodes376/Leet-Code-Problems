/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]<nums[j])
            {
                int tem=nums[i];
                nums[i]=nums[j];
                nums[j]=tem;
            }
        }
    }
    int *ans=(int*)malloc(numsSize* sizeof(int));
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            ans[j++]=i;
        }
    }
    *returnSize=j;
    return ans;
}
