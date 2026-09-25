/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
    int count=0,j=0;
    int *arr = malloc(numsSize * sizeof(int));
    arr[j++]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i-1]==nums[i]&&count<k-1)
        {
            arr[j++]=nums[i];
            count++;
        }
        else if(count<k-1||nums[i-1]!=nums[i])
        {
            arr[j++]=nums[i];
            count=0;
        }
    }
    *returnSize=j;
    return arr;
}
